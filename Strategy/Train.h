#pragma once
#include "IActivity.h"
class Train
{
public:
	IActivity *activity;
	Train()
	{
		activity = nullptr;
	}

	~Train()
	{
		delete activity;
	}

	void SetActivity(IActivity* activity) {
		this->activity = activity;
	}

	void ExecuteActivity() {
		activity->Do();
	}

private:

};
