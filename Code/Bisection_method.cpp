#include <iostream>
#include<iomanip>
using namespace std ;
#define Epsilne 0.01
 double Equation ( double x)
 {

     return x*x*x-x*x+2;
 }
 void  Bisection  ( double   a , double b )
 {

  if  (Equation (a)*Equation(b)>=0)
    {

    cout<< "Intial Choice is wrong   Try again ";
    exit(0);
    }
      double c=a;

      cout << "A\t\t B\t\tC\t  F(C)\n\n" ;

      while ((b-a)>=Epsilne )
      {
             c=(a+b)/2;
             cout<<a<< setw(15)<<b<<setw(15)<<c<<setw(15)<<Equation(c)<<"\n";
          if (Equation (c)==0.0)
          {

              break;

          }
        else if (Equation (c)*Equation(a)<0)
        {

            b=c;
        }
        else
        {

            a=c;
        }

    }
    cout<<"\nThe Root is:"<<c;
}
int main ()
{
    double e,f;
    cout<<"Enter Intal value of A:";
    cin>>e;
    cout<<"Enter Intal value of B:";
    cin>>f;
    Bisection(e,f);
}
