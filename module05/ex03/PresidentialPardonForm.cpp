#include "PresidentialPardonFormClass.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("presidential pardon", PresidentialPardonForm::signGrade, PresidentialPardonForm::execGrade), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
	: AForm (rhs.getName(), PresidentialPardonForm::signGrade, PresidentialPardonForm::execGrade), _target(rhs._target)
{
	*this = rhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	PresidentialPardonForm::doExecution() const
{
	std::cout << _target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}