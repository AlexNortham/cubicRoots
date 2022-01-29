//
// Created by Alex on 29/01/2022.
//

#ifndef CUBICROOTS_CUBICSOLVER_H
#define CUBICROOTS_CUBICSOLVER_H
#include <string>
#include <complex>

using namespace std;

class cubicSolver {
public:
    cubicSolver(complex<double> a, complex<double> b, complex<double> c, complex<double> d);
    complex<double> findRoots();
    complex<double> firstRoot();
    complex<double> secondRoot();
    complex<double> thirdRoot();

private:
    complex<double> a;
    complex<double> b;
    complex<double> c;
    complex<double> d;
};


#endif //CUBICROOTS_CUBICSOLVER_H
