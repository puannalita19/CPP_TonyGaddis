// Programming Challenge 13.1 - Date

#include "date.hpp"
#include <iostream>

int main() {
    Date now;
    Date xmas = Date(2012, 12, 25);
    Date nine_eleven (2001, 9, 11);
    Date invalid (1900, 0, -666); // will revert to 1900, 1, 1

    std::cout << now.formatShort() << '\n';
    std::cout << now.formatLong() << '\n';
    std::cout << now.formatOrdered() << "\n";

    std::cout << '\n';

    std::cout << xmas.formatShort() << '\n';
    std::cout << xmas.formatLong() << '\n';
    std::cout << xmas.formatOrdered() << '\n';

    std::cout << '\n';

    std::cout << nine_eleven.formatShort() << '\n';
    std::cout << nine_eleven.formatLong() << '\n';
    std::cout << nine_eleven.formatOrdered() << '\n';

    std::cout << '\n';

    std::cout << invalid.formatShort() << '\n';
    std::cout << invalid.formatLong() << '\n';
    std::cout << invalid.formatOrdered() << '\n';

    std::cout << '\n';

    return 0;
}
