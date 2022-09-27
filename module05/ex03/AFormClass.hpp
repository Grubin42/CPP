class Bureaucrat;
#ifndef FORMCLASS_H
# define FORMCLASS_H
#include <iostream>
#include "BureaucratClass.hpp"


class AForm 
{
private:
    const std::string _name;
    bool _signature;
    const int _gradeToSign;
    const int _gradeToExec;

protected:
	virtual void	doExecution() const = 0;

public:
    //constructor
    AForm(const std::string &name, int gradeSign, int gradeExec);
    AForm(const AForm & src);

    //destructor
    virtual ~AForm();

    //operator
    AForm & operator=(const AForm & src);

    //get
    const std::string &getName(void) const;
    int getGradeToSign(void) const;
    int getGradeToExec(void) const;
    bool getSignature(void) const;

    //set
    /*
    void setName(std::string name);
    void setGradeToSign(int const gradeSign);
    void setGradeToExec(int const gradeExec);
    void setSignature(bool signature);
    */
   
    //function membre
    void beSigned(const Bureaucrat &name);
    void execute(Bureaucrat const & executor) const;

    //class
    class SignatureFail: public std::exception {

        public:
            virtual const char* what() const throw();    
    };
    
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