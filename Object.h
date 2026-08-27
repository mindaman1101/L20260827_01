#pragma once
#include <iostream>

class UObject
{
public:
	UObject()
	{
		std::cout << "UObject »ý¼º" << std::endl;
	}

	~UObject()
	{
		std::cout << "UObject ¼Ò¸ê" << std::endl;
	}
};