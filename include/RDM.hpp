#ifndef RDM_HPP
#define RDM_HPP

#include "RIM.hpp"

class RDM {
    public:
        RDM (RIM& r, double ell, double d);

        void print_variables();


    private:
        double kappa;
        double phi;
        double ell;
        double d;
};



#endif