#include "AFormClass.hpp"
#include "BureaucratClass.hpp"

//constructor
AForm::AForm(const std::string &name, int gradeSign, int gradeExec)
:   _name(name), _signature(false), _gradeToSign(gradeSign), _gradeToExec(gradeExec) {
    
    if (gradeSign < 1 || gradeExec < 1) 
        throw Bureaucrat::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Bureaucrat::GradeTooLowException();
    else {
        std::cout << "New form create: " << *this << std::endl;
    }
}

AForm::AForm(const AForm & src)
:   _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec) {

    *this = src;
}

//destructor
AForm::~AForm() {

    std::cout << "destructor form create: " << std::endl;
}

//operator
AForm & AForm::operator=(const AForm & src) {

    this->_signature = src._signature;
    return (*this);
}

//get
const std::string &AForm::getName(void) const {

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
/*
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
*/

//function membre
void AForm::beSigned(const Bureaucrat &name) {

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

void	AForm::execute(const Bureaucrat &executor) const
{
	if (!_signature)
	{
		throw SignatureFail();
		return ;
	}
	if (executor.getGrade() > this->_gradeToExec)
	{
		throw GradeTooLowException();
		return ;
	}
	doExecution();
}

//class
const char* AForm::SignatureFail::what() const throw() {

    return "Exception the signature is not good";
}

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