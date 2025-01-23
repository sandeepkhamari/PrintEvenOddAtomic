#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>

std::atomic_int count = 1;
int MAX = 100;

void print_even()
{
	while(1)
	{
		if(count<=MAX)
		{
			if(count%2==0)
			{
			    std::cout<<"Even: "<<count<<std::endl;
			    count++;
			}
		}
		else
		{
			break;
		}
	}
}

void print_odd()
{
	while(1)
	{
		if(count<=MAX)
		{
			if(count%2==1)
			{
				std::cout<<"Odd: "<<count<<std::endl;
			    count++;
			}
		}
		else
		{
			break;
		}
	}
}

int main()
{
	std::thread th1(print_odd);
	std::thread th2(print_even);

	th1.join();
	th2.join();

	return 0;
}