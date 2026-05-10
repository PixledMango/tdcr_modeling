#include "RIM.hpp"
#include <iostream>

void RIM::change_tension(int a, int b, int c){
    t_1 += a;
    t_2 += b;
    t_3 += c;
}

void RIM::print_tension(){
    std::cout << "t_1 = " << t_1 << std::endl;
    std::cout << "t_2 = " << t_2 << std::endl;
    std::cout << "t_3 = " << t_3 << std::endl;
    std::cout << std::endl;
}

int RIM::get_tension_1(){
    return t_1;
}

int RIM::get_tension_2(){
    return t_2;
}

int RIM::get_tension_3(){
    return t_2;
}