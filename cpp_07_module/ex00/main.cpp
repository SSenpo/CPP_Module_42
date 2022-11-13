#include "template.hpp"

int main(void) {
	int a = 2;
	int b = 3;

	::swap(a, b);
    std::cout << BOLDGREEN
    ".--------------------------------------------.\n\n";

	std::cout << BOLDMAGENTA "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::cout << BOLDGREEN
    "\n.--------------------------------------------.\n"
    BOLDMAGENTA;

	std::string c = "300k in second????";
	std::string d = "No yet :(";
	std::cout << std::endl << "Before swap:" << std::endl;
	std::cout << "c = " << c << "\nd = " << d << std::endl;

    std::cout << BOLDGREEN
    "\n.--------------------------------------------.\n"
    BOLDMAGENTA;

	::swap(c, d);
	std::cout << std::endl << "After swap:" << std::endl;
	std::cout << "c = " << c << "\nd = " << d << std::endl;
	std::cout << "\nmin(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, b) = " << ::max(c, d) << std::endl;

    std::cout << BOLDGREEN
    "\n.--------------------------------------------.\n";

	return 0;
}