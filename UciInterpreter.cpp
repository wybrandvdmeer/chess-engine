#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

#include "UciInterpreter.h"
#include "UciCommand.h"

using namespace std;

std::vector<std::string> uciCommands = { "position", "go", "isready", "uci" };

UciCommand * UciInterpreter::read() {
	std::string line; 
	if(std::getline(std::cin, line)) {
		stringstream ss(line);

		std::string firstWord;
		ss >> firstWord;

		if(std::find(uciCommands.begin(), uciCommands.end(), firstWord) == uciCommands.end()) {
			cout << "Unknown command"; 
		} else {
		}
	}
	return NULL;
}
