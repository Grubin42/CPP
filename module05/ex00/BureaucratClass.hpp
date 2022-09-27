#ifndef BUREAUCRATCLASS_H
# define BUREAUCRATCLASS_H
#include <iostream>

class Bureaucrat
{
private:
    std::string _name;
    int _grade;

public:
    //constructor
    Bureaucrat(const std::string & name, int grade);
    Bureaucrat(const Bureaucrat & src);

    //destructor
    ~Bureaucrat();

    //operator
    Bureaucrat & operator=(const Bureaucrat & src);

    //get
    std::string getName(void) const;
    int getGrade(void) const;

    //function membre
    void upGrade(void);
    void downGrade(void);

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

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);
#endif