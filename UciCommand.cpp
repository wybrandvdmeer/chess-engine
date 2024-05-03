#include <string>

#include "UciCommandType.h"
#include "UciCommand.h"

UciCommand::UciCommand(UciCommandType uciCommandType, std::string arguments) {
	UciCommand::uciCommandType = uciCommandType;
	UciCommand::arguments = arguments;
}
