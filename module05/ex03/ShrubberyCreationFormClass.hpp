class Bureaucrat;
#ifndef SHRUBBERYCREATIONFORMCLASS_HPP
# define SHRUBBERYCREATIONFORMCLASS_HPP
#include "AFormClass.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
		~ShrubberyCreationForm();

	private:

		static const int	signGrade = 145;
		static const int	execGrade = 137;

		void	doExecution() const;
		const std::string	_target;

};

#endif 
