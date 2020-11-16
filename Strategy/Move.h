#pragma once
#include "IActivity.h"
#include <iostream>

class Move : public IActivity
{
public:
	Move()
	{
	}

	~Move()
	{
	}

	void Do() override {
		std::cout << "Train is moving" << std::endl;
	}

private:

};
