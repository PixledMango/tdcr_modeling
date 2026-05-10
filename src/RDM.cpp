#include "RDM.hpp"
#include <iostream>
#include <cmath>

#include <cmath>

RDM::RDM(RIM& r, double ell, double d): ell(ell), d(d) {
    // kappa
    kappa = 2.0 / (3.0 * ell * d);

    double t1 = r.get_tension_1();
    double t2 = r.get_tension_2();
    double t3 = r.get_tension_3();

    double sum_sq = t1 * t1 + t2 * t2 + t3 * t3;
    double pairwise = t1 * t2 + t1 * t3 + t2 * t3;
    kappa *= (sum_sq - pairwise);

    // phi
    double sqrt_3 = std::sqrt(3.0);

    double y = sqrt_3 * (t2 - t3);
    double x = 2.0 * t1 - t2 - t3;

    phi = std::atan2(y, x);
}

void RDM::print_variables(){
    std::cout << "k = "<< kappa << std::endl;
    std::cout << "phi = "<< phi << std::endl;
    std::cout << "ell = "<< ell << std::endl;
    std::cout << "d = "<< d << std::endl;
    std::cout << std::endl;
}