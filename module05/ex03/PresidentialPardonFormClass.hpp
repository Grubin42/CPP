class Bureaucrat;
#ifndef PRESIDENTIALPARDONFORMCLASS_HPP
# define PRESIDENTIALPARDONFORMCLASS_HPP
#include "AFormClass.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &);
		~PresidentialPardonForm();

	private:

		static const int	signGrade = 25;
		static const int	execGrade = 5;

		void	doExecution() const;
		const std::string	_target;

};

#endif