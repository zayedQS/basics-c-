#include <iostream> 

namespace first{

    double player = 100;
}

namespace second{
    double player = 55.7;
}


int main () {

// const is a value that u cannot change 
const double pi = 3.14; 
double radius = 4;
double volicty = 0.67 * pi * radius;


std::cout << volicty << "cm" << '\n';
// Name space u can give multiple values to a virabal

double player = 150; 


std::cout << second::player; 



    return 0;
}