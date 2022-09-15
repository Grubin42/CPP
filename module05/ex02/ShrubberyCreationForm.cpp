#include "ShrubberyCreationFormClass.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) {

    AForm::setSignature(false);
    AForm::setName(target);
    AForm::setGradeToSign(145);
    AForm::setGradeToExec(137);
    std::cout << "New form create: " << *this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) {

    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

    std::cout << "destructor ShrubberyCreationForm create: " << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src) {

    if (this != &src) {
        AForm::setSignature(src.getSignature());
        AForm::setName(src.getName());
        AForm::setGradeToSign(src.getGradeToSign());
        AForm::setGradeToExec(src.getGradeToExec());
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

    std::ofstream os;

    std::cout << executor.getName() << " create a tree!" << std::endl;
	os.open((this->getName() + "_shrubbery").c_str());
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
	os << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	os.close();
}