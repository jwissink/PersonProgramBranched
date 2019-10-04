#include "ConsoleIO.h"

ConsoleIO::ConsoleIO()
{
}

ConsoleIO::~ConsoleIO()
{
}

void ConsoleIO::Print(std::string aMessage)
{
	std::cout << aMessage << std::endl;
}

void ConsoleIO::PrintArray(std::list<std::string> aMessageArray)
{
	for (std::string s : aMessageArray) {
		std::cout << s << std::endl;
	}
	receivedMessages.insert(receivedMessages.end(), aMessageArray.begin(), aMessageArray.end());
}

std::string ConsoleIO::GetLastMessage()
{
	return lastMessage;
}
