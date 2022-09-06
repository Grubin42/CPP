#include "Phonebook_Class.hpp"
#include "Contact_Class.hpp"

int    ft_stoi(const std::string& str)
{
    int    i;

    if (std::istringstream(str) >> i)
        return(i);
    else
        throw std::exception();
}

int main() {

    int size = 8;
    int index = 0;
    int count = 0;
    std::string str;
    Phonebook phonebook;

    std::cout << "Welcome" << std::endl;
    std::cout << "Please write ADD to update your personal data" << std::endl;
    std::cout << "Or write SEARCH to search a user" << std::endl;
    std::cout << "Or write EXIT to end the program" << std::endl;
    while (1)
    {
        std::getline(std::cin, str);
        for(size_t i = 0; i < str.length(); i++)
            str[i] = tolower(str[i]);
        if (index == size)
            index = 0;
        if (str.compare("add") == 0)
        {
            phonebook.contact[index].putdata(index);
            index++;
            if (count != size)
                count++;
        }
        else if (str.compare("search") == 0 && count > 0)
        {
            std::cout << std::setfill (' ') << std::setw (10) << "index" << '|';
            std::cout << std::setfill (' ') << std::setw (10) << "first_name" << '|';
            std::cout << std::setfill (' ') << std::setw (10) << "last_name" << '|';
            std::cout << std::setfill (' ') << std::setw (10) << "nickname" << std::endl;
            for(int i = 0; i < count; i++)
                phonebook.contact[i].getData();
            while (1)
            {
                std::cout << "Please select an index" << std::endl;
                std::getline(std::cin, str);
                while(str.empty())
                {
                    std::cout << "Please select an index" << std::endl;
                    std::getline(std::cin, str);
                }
                while (str.compare("0") != 0 && str.compare("1") != 0 && str.compare("2") != 0
                && str.compare("3") != 0 && str.compare("4") != 0 && str.compare("5") != 0
                && str.compare("6") != 0 && str.compare("7") != 0)
                {
                    std::cout << "Please select an index" << std::endl;
                    std::getline(std::cin, str);
                }
                int str_to_int = ft_stoi(str);
                if (str_to_int < count)
                {
                    phonebook.contact[str_to_int].getOneData();
                    break;
                }
                else
                    std::cout << "This index does not exist" << std::endl;      
            }
        }
        else if (str.compare("exit") == 0)
            return (0);
        else
        {
            std::cout << "Please write ADD to update your personal data" << std::endl;
            std::cout << "Or write SEARCH to search a user" << std::endl;
            std::cout << "Or write EXIT to end the program" << std::endl;
        }
    }
    return 0;
}