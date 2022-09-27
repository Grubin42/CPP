#include "RobotomyRequestFormClass.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("robotomy request", RobotomyRequestForm::signGrade, RobotomyRequestForm::execGrade), _target(target)
{
	std::srand (time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
	: AForm (rhs.getName(), RobotomyRequestForm::signGrade, RobotomyRequestForm::execGrade), _target(rhs._target)
{
	*this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	RobotomyRequestForm::doExecution() const
{
	int success = std::rand() % 2;
	std::cout << "* Do some drilling noises .... *" << std::endl;
	if (success)
		std::cout << "Robotomy is a success !" << std::endl;
	else
		std::cout << "Unfortunately, the robotomy has failed. RIP." << std::endl;
}
