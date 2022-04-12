#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>

bool isItaNumber(std::string g)
{
    for (int i = 0; i < g.length(); i++)
        if (isdigit(g[i]) == false)
            return false;

    return true;
}

std::tuple <int, int> parameters(float num)
{
	int a, b;
	a = (int)std::ceil(num / 4);
	b = (int)std::floor(num / 2);
    return {a, b};
}


int main()
{
	std::string runner;
	do
    {
        std::cout << "Please enter RUN to run the programme: " << std::endl;
        std::cin >> runner;
    } while (runner != "RUN");

	std::string length;
	do
    {
        std::cout << "Please enter the length of the fence: " << std::endl;
        std::cin >> length;
    } while (!isItaNumber(length));

	float float_length = stof(length);
	while (float_length <= 0)
	{
	    std::cout << "Enter the length of the fence again: " << std::endl;
        std::cin >> float_length;
	}

    std::tuple <int, int> result_tup = parameters(float_length);
    std::cout << "Greatest possible area: " << std:: endl << get<0>(result_tup) * get<1>(result_tup) << std::endl;
    return 0;
}
