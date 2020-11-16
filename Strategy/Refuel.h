#pragma once
#include "IActivity.h"
#include <iostream>

class Refuel : public IActivity
{
public:
	Refuel()
	{
	}

	~Refuel()
	{
	}

	void Do() override {
		std::cout << "Train is refueling" << std::endl;
	}

private:

};