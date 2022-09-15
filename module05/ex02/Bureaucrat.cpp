#include "BureaucratClass.hpp"
#include "AFormClass.hpp"

//constructor
Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){

    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else {
        this->_grade = grade;
        std::cout << "New bureaucrat create: " << *this << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) {

    *this = src;
}

//destructor
Bureaucrat::~Bureaucrat() {


}

//operator
Bureaucrat & Bureaucrat::operator=(const Bureaucrat & src) {

    if (this != &src) {
        this->_name = src._name;
        this->_grade = src._grade;
    }
    return *this;
}

//get
std::string Bureaucrat::getName(void) const{

    return this->_name;
}

int Bureaucrat::getGrade(void) const{

    return this->_grade;
}

//function membre
void Bureaucrat::upGrade(void) {

    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else {
        this->_grade--;
        std::cout << "Felicitation you are upgrade" << std::endl;
    }
}

void Bureaucrat::downGrade(void) {

    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else {
        this->_grade++;
        std::cout << "You are downgrade fucking noob" << std::endl;
    }
}

void Bureaucrat::signForm(AForm & form) {

    try {

        if (form.getSignature() == true) {
            throw Bureaucrat::SignatureFail();
        }
        if (this->_grade > form.getGradeToSign()) {
            std::cout << this->_name << " couldn’t sign " << form.getName() << " because ";
            throw Bureaucrat::GradeTooLowException();
        }
        else {
            std::cout << this->_name << " signed " << form.getName() << std::endl;
            form.beSigned(*this);
        }
    }
    catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) {

    try {

        if (form.getSignature() == false) {
            throw Bureaucrat::SignatureFail();
        }
        if (this->_grade > form.getGradeToExec()) {
            std::cout << this->_name << " couldn’t exec " << form.getName() << " because ";
            throw Bureaucrat::GradeTooLowException();
        }
        else {
            std::cout << this->_name << " executed " << form.getName() << std::endl;
            form.execute(*this);
        }
    }
    catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

//class
const char* Bureaucrat::SignatureFail::what() const throw() {

    return "Exception the signature is not good";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

    return "Exception the grade value is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

    return "Exception the grade value is too low";
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src) {

    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return o;
}