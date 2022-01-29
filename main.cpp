#include <iostream>
#include <string>
#include <complex>
#include "cubicSolver.h"

using namespace std;

int main() {
    int temp;
    cout << "A cubic equation in the form ax^3 + bx^2 + cx + d\nPlease enter the values for a, b c and d\n";

    cout << "a = ";
    cin >> temp;
    complex<double> a(temp, 0);

    cout << "b = ";
    cin >> temp;
    complex<double> b(temp, 0);

    cout << "c = ";
    cin >> temp;
    complex<double> c(temp, 0);

    cout << "d = ";
    cin >> temp;
    complex<double> d(temp, 0);

    cubicSolver cubeRoots = cubicSolver(a,b,c,d);
    complex<double> xone = cubeRoots.firstRoot(), xtwo = cubeRoots.secondRoot(), xthree = cubeRoots.thirdRoot();

    string rootOne = to_string(real(xone)) + " + "  + to_string(imag(xone)),
    rootTwo = to_string(real(xtwo)) + " + "  + to_string(imag(xtwo)),
    rootThree = to_string(real(xthree)) + " + "  + to_string(imag(xthree));

    cout << "Roots are:\n" << rootOne << "\n" << rootTwo << "\n" << rootThree;
}
