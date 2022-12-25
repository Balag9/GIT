#include <iostream> // Поторопился, избавился от using namespace std в прошлом коммите :(

#include <string>

int main()

{

std::string str;

getline(std::cin, str);

std::cout << "Hello World from " << str;

}