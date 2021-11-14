#pragma once
class IActivity
{
public:
	IActivity()
	{
	}

	~IActivity()
	{
	}

	virtual void Do() = 0;

private:
	
};
