#pragma once
#include <iostream>
#include <string>
#include <list>

class ConsoleIO
{
public:	
	ConsoleIO();
	~ConsoleIO();
	void Print(std::string aMessage);
	void PrintArray(std::list<std::string> aMessageArray);
	std::string GetLastMessage();
private:
	std::string lastMessage;
	std::list<std::string> receivedMessages;

	
};

