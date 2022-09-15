class Bureaucrat;
#ifndef FORMCLASS_H
# define FORMCLASS_H
#include <iostream>
#include "BureaucratClass.hpp"


class AForm 
{
private:
    std::string _name;
    bool _signature;
    int _gradeToSign;
    int _gradeToExec;

public:
    //constructor
    AForm();
    AForm(std::string name, int const gradeSign, int const gradeExec);
    AForm(const AForm & src);

    //destructor
    virtual ~AForm();

    //operator
    AForm & operator=(const AForm & src);

    //get
    std::string getName(void) const;
    int getGradeToSign(void) const;
    int getGradeToExec(void) const;
    bool getSignature(void) const;

    //set
    void setName(std::string name);
    void setGradeToSign(int const gradeSign);
    void setGradeToExec(int const gradeExec);
    void setSignature(bool signature);

    //function membre
    void beSigned(const Bureaucrat name);
    virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream & operator<<(std::ostream & o, AForm const & src);
#endif