#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

double f(double x){
    return x*x*x - x*x + 2;
}

double df(double x){
    return 3*x*x - 2*x;
}

double Newton_Rapson ( double  x1 , double eps)
{
cout<<"X"<< setw(15)<<"F (x)"<<setw(15)<<"F(x)"<<"\n\n";
     double x2;
   x2=x1;
   while (abs(f(x2)) >=eps){
        cout<<x1<< setw(15)<<f(x1)<<setw(15)<<df(x1)<<"\n\n";
        x2 = x1 - (f(x1)/df(x1));
        x1 = x2;

        }
          return x1;
}
int main(){

  double x0, x1, n, eps;
    cout << " Enter X1 : ";
    cin >> x1;
    cout << "\n Enter EPS : ";
    cin >> eps;
  n= Newton_Rapson(x1,eps);
   if (!isnanf(n))
   {
       cout<<"Approximate Root:"<<n;
   }
   else
   {
       cout<<"Wrong Initalization";
   }
    return 0;

    }


