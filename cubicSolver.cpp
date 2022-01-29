//
// Created by Alex on 29/01/2022.
//

#include "cubicSolver.h"
#include <cmath>
#include <iostream>

using namespace std;

cubicSolver::cubicSolver(complex<double> a, complex<double> b, complex<double> c, complex<double> d){
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
};

complex<double> cubicSolver::findRoots() {
    complex<double> p = -(b/(3.0*a));
    complex<double> q = pow(p, 3.0) + ((b*c) - (3.0*a*d))/(6.0*pow(a, 2.0));
    complex<double> r = c/(3.0*a);

    complex<double> xone = pow(q + pow( pow(q, 2.0) + pow((r-pow(p,2.0)),3.0), (1.0/2.0)),(1.0/3.0)) + pow(q - pow( pow(q, 2.0) + pow((r-pow(p,2.0)),3.0), (1.0/2.0)),(1.0/3.0)) + p;
    complex<double> xtwo = pow(q + pow( pow(q, 2.0) + pow((r-pow(p,2.0)),3.0), (1.0/2.0)),(1.0/3.0)) + pow(q - pow( pow(q, 2.0) + pow((r-pow(p,2.0)),3.0), (1.0/2.0)),(1.0/3.0)) + p;
    complex<double> xthree = pow(q + pow( pow(q, 2.0) + pow((r-pow(p,2.0)),3.0), (1.0/2.0)),(1.0/3.0)) + pow(q - pow( pow(q, 2.0) + pow((r-pow(p,2.0)),3.0), (1.0/2.0)),(1.0/3.0)) + p;

};

complex<double>cubicSolver::firstRoot(){
    complex<double> p = -(b/(3.0*a));
    complex<double> q = pow(p, 3.0) + ((b*c) - (3.0*a*d))/(6.0*pow(a, 2.0));
    complex<double> r = c/(3.0*a);

    complex<double> xone = pow(q + pow((pow(q, 2.0) + pow((r - pow(p, 2.0)), 3.0)), (1.0/2.0)), (1.0/3.0)) + pow(q - pow((pow(q, 2.0) + pow((r - pow(p, 2.0)), 3.0)), (1.0/2.0)), (1.0/3.0)) + p;

    return xone;
}

complex<double>cubicSolver::secondRoot() {
    complex<double> p = -(b/(3.0*a));
    complex<double> q = pow(p, 3.0) + ((b*c) - (3.0*a*d))/(6.0*pow(a, 2.0));
    complex<double> r = c/(3.0*a);

    complex<double> xtwo = pow(q + pow((pow(q, 2.0) + pow((r - pow(p, 2.0)), 3.0)), (1.0/2.0)), (1.0/3.0)) + pow(q + pow((pow(q, 2.0) + pow((r - pow(p, 2.0)), 3.0)), (1.0/2.0)), (1.0/3.0)) + p;

    return xtwo;
}

complex<double>cubicSolver::thirdRoot() {
    complex<double> p = -(b/(3.0*a));
    complex<double> q = pow(p, 3.0) + ((b*c) - (3.0*a*d))/(6.0*pow(a, 2.0));
    complex<double> r = c/(3.0*a);

    complex<double> xthree = pow(q - pow((pow(q, 2.0) + pow((r - pow(p, 2.0)), 3.0)), (1.0/2.0)), (1.0/3.0)) + pow(q - pow((pow(q, 2.0) + pow((r - pow(p, 2.0)), 3.0)), (1.0/2.0)), (1.0/3.0)) + p;

    return xthree;
}
