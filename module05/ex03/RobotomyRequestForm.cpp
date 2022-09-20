#include "RobotomyRequestFormClass.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) {

    AForm::setSignature(false);
    AForm::setName(target);
    AForm::setGradeToSign(72);
    AForm::setGradeToExec(45);
    std::cout << "NEW FORM create: " << *this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) {

    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {

    std::cout << "destructor RobotomyRequestForm create: " << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src) {

    if (this != &src) {
        AForm::setSignature(src.getSignature());
        AForm::setName(src.getName());
        AForm::setGradeToSign(src.getGradeToSign());
        AForm::setGradeToExec(src.getGradeToExec());
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

    srand(time(0));
    int value = rand();
    
    std::cout << executor.getName() << " makes drill noise" << std::endl;
    if (value % 2 == 0)
        std::cout << this->getName() << " has been robotomized with success" << std::endl;
    else
        std::cout << this->getName() << " failed" << std::endl;
}