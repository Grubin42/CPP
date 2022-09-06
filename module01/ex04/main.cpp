#include <fstream>
#include <iostream>
#include <string>

void ft_replace(std::string *tmp_full_file, std::string s1, std::string s2) {

    std::size_t pos = tmp_full_file->find(s1);
    while (pos != std::string::npos)
    {
        tmp_full_file->erase(pos, s1.length());
        tmp_full_file->insert(pos, s2);
        pos = tmp_full_file->find(s1);
    }
}

int main(int ac, char **av) {

    if (ac != 4) {

        std::cout << "Error argument!" << std::endl;
        return 0;
    }
    
    std::fstream    file;
    std::ofstream   new_file;
    std::string     tmp_file;
    std::string     tmp_full_file;
    std::string     s1 = av[2];
    std::string     s2 = av[3];

    file.open (av[1]);
    if (!file.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return 0;
    }
    while (getline(file, tmp_file)){

        tmp_file += '\n';
        tmp_full_file += tmp_file;
    }
    //tmp_full_file.pop_back();
    tmp_full_file.resize(tmp_full_file.length() - 1);
    file.close();
    ft_replace(&tmp_full_file, s1, s2);
    new_file.open("text_replace.txt");
    if (!new_file.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return 0;
    }
    new_file << tmp_full_file <<  std::endl;
    new_file.close();
    return 0;
}