#ifndef MONITOR_H
#define MONITOR_H

using namespace std;
#include <string>

class Monitor
{
private:
	std::string buffer[100];
	int front;						//position of first full slot in buffer
	int rear;						//position of first empty slot in buffer
	int count;						//number of full slots
	bool not_full;	
	bool not_empty;					
	bool stringAdded;

public:
	Monitor();
	void Deposit(std::string data);
	void Fetch(std::string &result);
	bool StringAdded();
};

#endif