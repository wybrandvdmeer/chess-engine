#include <iostream>

#include "UciInterpreter.h"
#include "UciCommand.h"

using namespace std;

UciCommand * UciInterpreter::read() {
	std::string line; 
	if(std::getline(std::cin, line)) {

		cout << line;
	}
	return NULL;
}
