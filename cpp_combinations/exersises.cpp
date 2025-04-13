#include <iostream>

void ex76() {
    int a=5;
    int& p=a;
    std::cout << &a -&p <<std::endl;
}