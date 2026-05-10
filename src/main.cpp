#include <iostream>
#include <vector>
#include "RIM.hpp"
#include "RDM.hpp"



int main() {
    RIM robot_independent;
    
    robot_independent.change_tension(0,0,0);
    robot_independent.print_tension();

    RDM roboot_dependent(robot_independent, 10, 1.5);
    roboot_dependent.print_variables();

    return 0;
}