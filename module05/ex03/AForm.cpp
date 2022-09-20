#include "AFormClass.hpp"

//constructor
AForm::AForm() {

}

AForm::AForm(std::string name, int const gradeSign, int const gradeExec)
:   _name(name) {
    
    if (gradeSign < 1 || gradeExec < 1) 
        throw Bureaucrat::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Bureaucrat::GradeTooLowException();
    else {
        this->_gradeToSign = gradeSign;
        this->_gradeToExec = gradeExec;
        this->_signature = false;
        std::cout << "New form create: " << *this << std::endl;
    }
}

AForm::AForm(const AForm & src) {

    *this = src;
}

//destructor
AForm::~AForm() {

    std::cout << "destructor form create: " << std::endl;
}

//operator
AForm & AForm::operator=(const AForm & src) {

    if (this != &src) {
        this->_name = src._name;
        this->_signature = src._signature;
        this->_gradeToExec = src._gradeToExec;
        this->_gradeToSign = src._gradeToSign;
    }
    return *this;
}

//get
std::string AForm::getName(void) const {

    return this->_name;
}

int AForm::getGradeToSign(void) const {

    return this->_gradeToSign;
}

int AForm::getGradeToExec(void) const {

    return this->_gradeToExec;
}

bool AForm::getSignature(void) const {

    return this->_signature;
}

//set
void AForm::setName(std::string name) {

    this->_name = name;
}

void AForm::setGradeToSign(int const gradeSign) {

    try {

        if (gradeSign < 1) 
            throw AForm::GradeTooHighException();
        else if (gradeSign > 150)
            throw AForm::GradeTooLowException();
        else
            this->_gradeToSign = gradeSign;
    }
    catch (const AForm::GradeTooLowException & e) {
        std::cerr << e.what() << std::endl;
    }

}

void AForm::setGradeToExec(int const gradeExec) {

    try {

        if (gradeExec < 1) 
            throw AForm::GradeTooHighException();
        else if (gradeExec > 150)
            throw AForm::GradeTooLowException();
        else
            this->_gradeToExec = gradeExec;
    }
    catch (const AForm::GradeTooLowException & e) {
        std::cerr << e.what() << std::endl;
    }

}

void AForm::setSignature(bool signature) {

    this->_signature = signature;
}


//function membre
void AForm::beSigned(const Bureaucrat name) {

    try {

        if (name.getGrade() >= this->_gradeToSign)
            throw AForm::GradeTooLowException();
        else
            this->_signature = true;
    }
    catch (const AForm::GradeTooLowException & e) {
        std::cerr << e.what() << std::endl;
    }
}

//class
const char* AForm::GradeTooHighException::what() const throw() {

    return "Exception the grade value is too high";
}

const char* AForm::GradeTooLowException::what() const throw() {

    return "Exception the grade value is too low";
}

std::ostream & operator<<(std::ostream & o, AForm const & src) {

    o << "Form: " << src.getName() << "\n" 
        << "Grade to sign: " << src.getGradeToSign() << "\n"
        << "Grade to exec: " << src.getGradeToExec() << "\n"
        << "Signature: " << src.getSignature() << std::endl;
    return o;
}