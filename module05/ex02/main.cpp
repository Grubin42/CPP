#include "BureaucratClass.hpp"
#include "AFormClass.hpp"
#include "ShrubberyCreationFormClass.hpp"
#include "RobotomyRequestFormClass.hpp"
#include "PresidentialPardonFormClass.hpp"

int    main(void)
{
    try
    {
        Bureaucrat chef("Henry", 25);
        ShrubberyCreationForm a1("truc");  
        ShrubberyCreationForm a2("much");  
        chef.executeForm(a1);   
        chef.executeForm(a2); 
        chef.signForm(a1);
        chef.signForm(a2);
        chef.executeForm(a1);
        chef.executeForm(a2);
        std::cout << a1 << std::endl;
        std::cout << a2 << std::endl;

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