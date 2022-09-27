#include "BureaucratClass.hpp"
#include "FormClass.hpp"

int    main(void)
{
    try
    {
        Bureaucrat chef("Henry", 149);
        std::cout << chef << std::endl;
        Form a1("a1", 150, 150);
        Form a2("a2", 150, 150);
        std::cout << a1 << std::endl;
        chef.signForm(a1);
        std::cout << a1 << std::endl;
        chef.signForm(a1);
        chef.downGrade();
        chef.signForm(a2);
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