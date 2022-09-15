#include "FormClass.hpp"


//constructor
Form::Form(std::string name, int const gradeSign, int const gradeExec)
:   _name(name) {
    
    this->_signature = false;
    if (gradeSign < 1 || gradeExec < 1) 
        throw Bureaucrat::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Bureaucrat::GradeTooLowException();
    else {
        this->_gradeToSign = gradeSign;
        this->_gradeToExec = gradeExec;
        std::cout << "New form create: " << *this << std::endl;

    }
}

Form::Form(const Form & src) {

    *this = src;
}

//destructor
Form::~Form() {


}

//operator
Form & Form::operator=(const Form & src) {

    if (this != &src) {
        this->_name = src._name;
        this->_signature = src._signature;
        this->_gradeToExec = src._gradeToExec;
        this->_gradeToSign = src._gradeToSign;
    }
    return *this;
}

//get
std::string Form::getName(void) const {

    return this->_name;
}

int Form::getGradeToSign(void) const {

    return this->_gradeToSign;
}

int Form::getGradeToExec(void) const {

    return this->_gradeToExec;
}

bool Form::getSignature(void) const {

    return this->_signature;
}

//function membre
void Form::beSigned(const Bureaucrat name) {

    try {

        if (name.getGrade() >= this->_gradeToSign)
            throw Form::GradeTooLowException();
        else
            this->_signature = true;
    }
    catch (const Form::GradeTooLowException & e) {
        std::cerr << e.what() << std::endl;
    }
}

//class
const char* Form::GradeTooHighException::what() const throw() {

    return "Exception the grade value is too high";
}

const char* Form::GradeTooLowException::what() const throw() {

    return "Exception the grade value is too low";
}

std::ostream & operator<<(std::ostream & o, Form const & src) {

    o << "Form: " << src.getName() << "\n" 
        << "Grade to sign: " << src.getGradeToSign() << "\n"
        << "Grade to exec: " << src.getGradeToExec() << "\n"
        << "Signature: " << src.getSignature() << std::endl;
    return o;
}