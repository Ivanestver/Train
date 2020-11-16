#pragma once
#include "IActivity.h"
#include <iostream>

class TuTu : public IActivity
{
public:
	TuTu()
	{
	}

	~TuTu()
	{
	}

	void Do() override {
		std::cout << "Train is TuTuing" << std::endl;
	}

private:

};