#include <iostream>
#include <vector>
#include "RIM.hpp"



int main() {
    RIM robot;
    robot.print_tension();
    
    robot.change_tension(1,-1,-1);
    robot.print_tension();

    robot.change_tension(2,-2,-2);
    robot.print_tension();

    return 0;
}