#include <env.h>

#include <iostream>

int main()
{
	std::cout << "CMAKE_INSTALL_PREFIX: " << CMAKE_INSTALL_PREFIX << std::endl;
	std::cout << "PROJECT_BINARY_DIR: " << PROJECT_BINARY_DIR << std::endl;

	return 0;
}
