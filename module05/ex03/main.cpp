#include "BureaucratClass.hpp"
#include "AFormClass.hpp"
#include "ShrubberyCreationFormClass.hpp"
#include "RobotomyRequestFormClass.hpp"
#include "PresidentialPardonFormClass.hpp"
#include "InternClass.hpp"

int main()
{
	std::srand (time(NULL));

	std::cout << "---------- Interns -----------" << std::endl;
	{
		Bureaucrat	georges("Georges", 1);
		Intern		intern;
		AForm		*form;

		form = intern.makeForm("shrubbery creation", "mountain");
		if (form)
		{
			std::cout << *form << std::endl;
			georges.signForm(*form);
			georges.executeForm(*form);
			delete form;
		}
		std::cout << "-------------" << std::endl;
		form = intern.makeForm("robotomy request", "the president");
		if (form)
		{
			std::cout << *form << std::endl;
			georges.signForm(*form);
			georges.executeForm(*form);
			delete form;
		}
		std::cout << "-------------" << std::endl;
		form = intern.makeForm("presidential pardon", "The worst terrorist ever");
		if (form)
		{
			std::cout << *form << std::endl;
			georges.signForm(*form);
			georges.executeForm(*form);
			delete form;
		}
		std::cout << "-------------" << std::endl;
		form = intern.makeForm("Promote the intern", "me");
		if (form)
		{
			std::cout << *form << std::endl;
			georges.signForm(*form);
			georges.executeForm(*form);
			delete form;
		}
	}
}