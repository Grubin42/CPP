class Bureaucrat;
#ifndef ROBOTOMYREQUESTFORMCLASS_HPP
# define ROBOTOMYREQUESTFORMCLASS_HPP
#include "AFormClass.hpp"
#include <cstdlib>
#include <time.h>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &);
		~RobotomyRequestForm();

	private:

		static const int	signGrade = 72;
		static const int	execGrade = 45;

		void	doExecution() const;
		const std::string	_target;

};

#endif