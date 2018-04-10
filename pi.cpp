#include <iostream>
#include <math.h>
#include <string>

double leibniz_pi(double);

double leibniz_pi(double n) {
	double pi = 0;

	// while (i < n)
	for (double i = 0; i < n; i++) {
		pi += (pow(-1, i))/((2*i) + 1);
	}
	
	return pi * 4;
}

int main() {
	std::string pedantic;
	int digits = 0;

	// Set number formatting
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(3);

	while (true) {
		std::cout << "Enter the value of the parameter 'n'"
		       " in the Leibniz formula (or -1 to quit):" << std::endl;
		std::cin >> digits;

		if (digits == -1) {
            break;
        }
        
		if (digits + 1 == 1) {
            pedantic = "term";
        }
		else {
            pedantic = "terms";
        }

		std::cout << "The approximate value of pi using " << digits + 1 <<
			" " << pedantic << " is: " << leibniz_pi((double)digits + 1)
			<< std::endl;
	}

	return 0;
}
