#include <iostream>
#include <algorithm>
#include <string>

#include "UciCommandType.h"
#include "UciCommand.h"
#include "UciInterpreter.h"

using namespace std;

char const *USAGE="ce\n";

char* getOption(char ** begin, char ** end, const std::string & option) {
    char ** itr = std::find(begin, end, option);
    if (itr != end && ++itr != end)
    {
        return *itr;
    }
    return NULL;
}

int main(int argc, char ** argv) {
	UciInterpreter uciInterpreter;
	do {
		UciCommand * command = uciInterpreter.read();
		if(command->uciType == uci) {
		}
		
		if(command->uciType == position) {
		}
		
		if(command->uciType == go) {
		}

		if(command->uciType == isready) {
		}
	} while(true);
	
	exit(0);
}
