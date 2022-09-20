#include "BureaucratClass.hpp"
#include "AFormClass.hpp"
#include "ShrubberyCreationFormClass.hpp"
#include "RobotomyRequestFormClass.hpp"
#include "PresidentialPardonFormClass.hpp"
#include "InternClass.hpp"

int    main(void)
{
    AForm* rrf;
    AForm* pres_form;
    AForm* shrub_form;
    Intern someRandomIntern;
    Bureaucrat Boss("Michel", 2);

    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        pres_form = someRandomIntern.makeForm("presidential pardon", "Bender");
        shrub_form = someRandomIntern.makeForm("shrubbery creation", "Bender");
        rrf->execute(Boss);
        Boss.signForm(*shrub_form);
        shrub_form->execute(Boss);
        delete rrf;
        delete shrub_form;
        pres_form->execute(Boss);
        rrf = someRandomIntern.makeForm("robotomy request tabernaque", "Bender");
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        delete pres_form;
    }
}