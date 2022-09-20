class Bureaucrat;
#ifndef PRESIDENTIALPARDONFORMCLASS_HPP
# define PRESIDENTIALPARDONFORMCLASS_HPP
#include "AFormClass.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        //constructor
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm & src);
        
        //destructor
        ~PresidentialPardonForm();

        //operator
        PresidentialPardonForm & operator=(const PresidentialPardonForm & src);

        //function membre
        void execute(Bureaucrat const & executor) const;
};

#endif