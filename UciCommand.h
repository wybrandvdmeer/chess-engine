#include <string>

#include "UciCommandType.h"

#ifndef UCI_COMMAND_H
#define UCI_COMMAND_H

class UciCommand {
public:
	UciCommandType uciCommandType;
	std::string arguments;
	
	UciCommand(UciCommandType uciCommandType, std::string arguments);
};

#endif
