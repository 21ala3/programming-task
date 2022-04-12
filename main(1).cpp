#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>
#include <limits>

std::tuple <int, int> calculateParameters(float num) {
	int a, b;
	a = (int)std::ceil(num / 4);
	b = (int)std::floor(num / 2);
    return {a, b};
}

int main() {
	std::string runner;
	do {
        std::cout << "Please enter RUN to run the programme: " << std::endl;
        std::cin >> runner;
    } while (runner != "RUN");

	int length;
	do {
        std::cout << "Please enter the length of the fence: " << std::endl;
        std::cin >> length;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (length <= 0);

    std::tuple <int, int> result_tup = calculateParameters(float(length));
    int a = get<0>(result_tup);
    int b = get<1>(result_tup);
    std::cout << "Greatest possible area: " << std::endl << a * b << std::endl;

    return 0;
}
