#ifndef INTERNCLASS_HPP
# define INTERNCLASS_HPP

#include "PresidentialPardonFormClass.hpp"
#include "RobotomyRequestFormClass.hpp"
#include "ShrubberyCreationFormClass.hpp"
#include <iostream>
#include <string>

class AForm;

class Intern
{
	public:
		Intern();
		Intern(const Intern &);
		Intern &operator=(const Intern &);
		~Intern();

		AForm *makeForm(const std::string &name, const std::string &target);

};

struct FormType
{
	std::string	name;
	AForm		*form;
};

#endif 