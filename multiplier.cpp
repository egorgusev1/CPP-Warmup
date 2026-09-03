#include <iostream>

int main(){

    std::cout << "Enter a number: " << '\n';

    int x {};
    std::cin >> x;
    std::cout << '\n';

    std::cout << "Double is: " << x * 2 << '\n' << "Triple is: " << x * 3 << '\n';

    std::cin.get();
    std::cin.get();

    return 0;
}