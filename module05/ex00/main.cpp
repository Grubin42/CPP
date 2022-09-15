#include "BureaucratClass.hpp"

int    main(void)
{
    try
    {
        Bureaucrat chef("Henry", 149);
        chef.downGrade();
        std::cout << chef << std::endl;
        chef.upGrade();
        std::cout << chef << std::endl;
        Bureaucrat souschef("popey", 1);
        std::cout << souschef << std::endl;
        souschef.downGrade();
        souschef.downGrade();
        std::cout << souschef << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}