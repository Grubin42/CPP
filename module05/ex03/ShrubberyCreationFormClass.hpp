class Bureaucrat;
#ifndef SHRUBBERYCREATIONFORMCLASS_HPP
# define SHRUBBERYCREATIONFORMCLASS_HPP
#include "AFormClass.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    public:
        //constructor
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm & src);
        //destructor
        ~ShrubberyCreationForm();

        //operator
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & src);

        //function membre
        void execute(Bureaucrat const & executor) const;
};

#endif 
