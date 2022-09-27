#include "ShrubberyCreationFormClass.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("shrubbery creation", ShrubberyCreationForm::signGrade, ShrubberyCreationForm::execGrade), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
	: AForm (rhs.getName(), ShrubberyCreationForm::signGrade, ShrubberyCreationForm::execGrade), _target(rhs._target)
{
	*this = rhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::doExecution() const
{
	std::ofstream os;

	os.open((_target + "_shrubbery").c_str());
	if (!os.is_open())
		return ;
	os << "               ,@@@@@@@," << std::endl;
	os << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	os << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	os << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	os << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	os << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	os << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	os << "       |o|        | |         | |" << std::endl;
	os << "       |.|        | |         | |" << std::endl;
	os << "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	os.close();
}