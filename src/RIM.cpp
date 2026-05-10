#include "RIM.hpp"
#include <iostream>

RIM::RIM(){
    t_1 = 0;
    t_2 = 0;
    t_3 = 0;
}

void RIM::change_tension(int a, int b, int c){
    t_1 += a;
    t_2 += b;
    t_3 += c;
}

void RIM::print_tension(){
    std::cout << t_1 << " ";
    std::cout << t_2 << " ";
    std::cout << t_3 << std::endl;
}