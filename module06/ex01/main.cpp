#include "Serialization.hpp"

#include <iostream>
#include <stdlib.h>

void	print_data(const Data *data, const std::string &name)
{
	std::cout << "The pointer is : " << data << std::endl;
	if (!data)
		std::cout << name << " is NULL" << std::endl;
	else
		std::cout << name << " = {"
			<< data->some_i << ", "
			<< data->some_d << ", "
			<< data->some_f << ", "
			<< "'" << data->some_s << "'}" << std::endl;

}

int main ()
{
	Data		data1;
	Data		*data2;
	uintptr_t	ptr;

	data1.some_i = 345;
	data1.some_d = 342.324;
	data1.some_f = 34.234235f;
	data1.some_s = "Hello";

	print_data(&data1, "data1");

	ptr = serialize(&data1);
	data2 = deserialize(ptr);

	print_data(data2, "data2");

	ptr = serialize(NULL);
	data2 = deserialize(ptr);

	print_data(data2, "data2");
	return 0;
}