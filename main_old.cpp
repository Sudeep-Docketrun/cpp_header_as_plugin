#include <iostream>
#include "fac.h"


int main(){
        int positive_integer;
        
        std::cout <<"Enter a positive integer: "<< std::endl;
        std::cin >> positive_integer;
        std::cout << "The factorial of " << positive_integer << " is: " << factorial(positive_integer) << std::endl;

        return 0;
    }