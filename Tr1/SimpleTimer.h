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
	~SimpleTimer()
	{
		end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;
		std::cout << "DURATION: " << duration.count() << " sec" << std::endl;
	}

private:
	std::chrono::time_point<std::chrono::steady_clock> start, end;

};