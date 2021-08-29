#include <iostream>

void case1() {
    int favorite_number;
    //Not initializing a variable can output any value stored in the memory space of the variable
    std::cout << favorite_number <<std::endl; //<-- At this precise compile time the value was 4201019
    //warning: 'favorite_number' is uninitialized
}

void case2() {
    int favorite_number;
    //If we declare a variable and not really use it, then we'll get a warning
    std::cout << "favorite_number" <<std::endl; //<--
    //warning: unused variable 'favorite_number'
}

int main() {
    /*
     * Compiler warnings are noticed when there's code that's compilable but it's implementation can cause error or unexpected
     * outputs.    
    */
    
    case1();
    case2();
    
    return 0;
}