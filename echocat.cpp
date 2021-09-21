#include <iostream>
#include <string>

//this was an assignment for a class.
//and I'm using it for HW0
std::string concat_args(char **argv)
{
	std::string s = {""};
	while(*argv != NULL){
		s = s + *argv;
		argv++;
	}
	return s;
}

/*
 * DO NOT MODIFY main().
 */
int main(int argc, char **argv)
{
	std::cout << concat_args(argv + 1) << std::endl;
}

//HI