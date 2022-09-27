class Bureaucrat;
#ifndef FORMCLASS_H
# define FORMCLASS_H
#include <iostream>
#include "BureaucratClass.hpp"


class Form 
{
private:
    const std::string _name;
    bool _signature;
    const int _gradeToSign;
    const int _gradeToExec;

public:
    //constructor
    Form(const std::string &name, int gradeSign, int gradeExec);
    Form(const Form & src);

    //destructor
    ~Form();

    //operator
    Form & operator=(const Form & src);

    //get
    const std::string &getName(void) const;
    int getGradeToSign(void) const;
    int getGradeToExec(void) const;
    bool getSignature(void) const;

    //function membre
    void beSigned(const Bureaucrat &name);

    //class
    class GradeTooHighException: public std::exception {

        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        
        public:
            virtual const char* what() const throw();
    };
};

std::ostream & operator<<(std::ostream & o, Form const & src);
#endif