#include <iostream>

extern int x;

int main() {
    /*
     * Linked error might be caused due to impossibility to find a value, file or resource from link
     * Often caused because of missing files or files being in a wrong directory
     * sources with this kind of error will compile with no problem at all. But will have issues when building 
     * (where the linking process occurs)
    */
    std::cout <<"Hello testing..." <<std::endl;
    
    std::cout << x;
    return 0;
}