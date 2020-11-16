#pragma once
#include "IActivity.h"
#include <iostream>

class GetPassengers : public IActivity
{
public:
	GetPassengers()
	{
	}

	~GetPassengers()
	{
	}

	void Do() override {
		std::cout << "Train is getting passengers" << std::endl;
	}

private:

};