#include "InternClass.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern &Intern::operator=(const Intern &rhs)
{
	if (&rhs == this)
		return (*this);
	return (*this);
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	AForm *newForm = NULL;
	FormType formList[3] = {
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"presidential pardon", new PresidentialPardonForm(target)}
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (formList[i].name == name)
			newForm = formList[i].form;
		else
			delete formList[i].form;
	}
	if (!newForm)
		std::cerr << "Intern is ashamed because he doesn't know the form he "
			"was asked to create : " << name << std::endl;
	return (newForm);
}