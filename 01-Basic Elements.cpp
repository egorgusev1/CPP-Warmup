#include <iostream>

int five() {
        return 5;
    }

int multiply(int a, int b){
    return a*b;
}    

int main()
{
    // std::cout << 5 << '\n';         //print the literal number '5'
    // std::cout << -6.7 << '\n';     //print the literal number '-6,7'
    // std::cout << 'H' << '\n';       //print the literal character 'H'
    // std::cout << "Hello"<< '\n';   //print the literal text 'Hello'

    // int x;                //define a variable named x (of type int)

    // double width;         //define a variable named width, of type double
    // width = 5;            //assignment of value 5 into variable width
    // std::cout << width << '\n';
    // width = 7;
    // std::cout << width << '\n';
    // int height {6};         //define a variable height and initialize with inital value 6!!!PREFERRED!!
    // std::cout << height << '\n';


    // five() is a function that returns the value 5
    
    int e {five()};
    std::cout << e << '\n';


    std::cin.get();

    

    return 0;
}
