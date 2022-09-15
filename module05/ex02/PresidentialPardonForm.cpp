#include "PresidentialPardonFormClass.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) {

    AForm::setSignature(false);
    AForm::setName(target);
    AForm::setGradeToSign(25);
    AForm::setGradeToExec(5);
    std::cout << "NEW FORM create: " << *this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) {

    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {

    std::cout << "destructor PresidentialPardonForm create: " << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src) {

    if (this != &src) {
        AForm::setSignature(src.getSignature());
        AForm::setName(src.getName());
        AForm::setGradeToSign(src.getGradeToSign());
        AForm::setGradeToExec(src.getGradeToExec());
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

    std::cout << executor.getName() << " inform you that " << AForm::getName() << " was forgiven by Zaphod Beeblebrox." << std::endl;
}