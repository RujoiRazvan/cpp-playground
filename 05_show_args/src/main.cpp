#include <stdio.h>

#include <iostream>
#include <string>
#include <ctype.h>
#include <locale>


int main(int argc, char* argv[])
{
	if (argc <= 1)
	{
		printf("No program arguments found.\n");
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		std::string argumentAsString = argv[i];
	
		std::cout << argumentAsString << std::endl;
	}
	
	return 0;
}