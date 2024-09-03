#pragma once

#include <Windows.h>
#include <chrono>
#include <iostream>


class SimpleTimer
{
public:
	SimpleTimer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	SimpleTimer(std::string name)
	{
		start = std::chrono::high_resolution_clock::now();
		Name = name;
	}
	~SimpleTimer()
	{
		end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;
		if (Name.length() == 0) std::cout << "DURATION: " << duration.count() << " sec" << std::endl;
		else					std::cout << "DURATION "  << Name << ": " << duration.count() << " sec" << std::endl;
	}
	std::string Name;

private:
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	
};