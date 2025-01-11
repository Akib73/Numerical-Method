#include <iostream>
#include <cmath>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
using namespace std;
double func(double x) {
     return x*x*x - x -2;
}

double falsePosition(double a, double b, double tolerance, int maxIterations) {
    if (func(a) * func(b) >= 0) {
        cout << "Invalid initial range. " << endl;
        return NAN;
    }

  cout<<"A"<< setw(15)<<"B"<<setw(15)<<"C"<<setw(16)<<"F(c)"<<"\n\n";

  double c = a;

    for (int i = 0; i < maxIterations; i++) {

  cout<<a<< setw(15)<<b<<setw(15)<<c<<setw(15)<<func(c)<<"\n\n";

   c = (a * func(b) - b * func(a)) / (func(b) - func(a));

    if (fabs(func(c)) <= tolerance) {

    cout << "Root found after " << i + 1 << " iterations." << endl;
            return c;
        }

        if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }

    cout << "Method did not converge within the maximum number of iterations." << endl;
    return c;
}

int main() {
    double a, b ;
    double tolerance= 0.0001;
    int maxIterations = 1000;
    cout<<"Enter The Value of A:";
    cin>> a;
    cout<<"Enter The Value of B:";
    cin>>b;

        cout<< setprecision(6)<< fixed;


    double root = falsePosition(a, b, tolerance, maxIterations);
    if (!isnan(root)) {
        cout << "The root is approximately: " << root << endl;
    }

    return 0;
}
