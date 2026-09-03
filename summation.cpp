#include <iostream>

int main()
{
    std::cout << "Enter an integer: \n";

    int x{};
    int y{};

    std::cin >> x;
    std::cout << "Enter another integer: \n";
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << '\n';
    std::cout << x << " - " << y << " is " << x - y << '\n';


    std::cin.get();
    std::cin.get();

    return 0;
}