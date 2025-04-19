#include <iostream>

void ex76_easy() {
    int a=5;
    int& p=a;
    std::cout << &a -&p <<std::endl;
    // Why ?
    std::cout<<"p is a reference to a, meaning it is not a new variable — it’s just another name for a.";
    std::cout<< &a<<std::endl;
    std::cout<< &p<<std::endl;
    std::cout<< "many compilers (like GCC, Clang, MSVC) allow it and treat it as valid — but it’s walking a fine line.";
    std::cout<< "Save alternative:"<<std::endl;
    std::cout << std::boolalpha << (&a == &p) << std::endl; // prints: true

}

void ex6() {
    // ic cpp 17 this does not work
    // int a=2;
    // std::cout<<++a + a--;
}
