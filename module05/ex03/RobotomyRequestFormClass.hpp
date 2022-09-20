class Bureaucrat;
#ifndef ROBOTOMYREQUESTFORMCLASS_HPP
# define ROBOTOMYREQUESTFORMCLASS_HPP
#include "AFormClass.hpp"
#include <cstdlib>
#include <time.h>

class RobotomyRequestForm : public AForm
{  
    public:
        //constructor
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm & src);
        //destructor
        ~RobotomyRequestForm();

        //operator
        RobotomyRequestForm & operator=(const RobotomyRequestForm & src);

        //function membre
        void execute(Bureaucrat const & executor) const;
};

#endif