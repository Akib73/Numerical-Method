#include <iostream >
using namespace std;
int main ()
 {

     int n;
      cout <<"Enter The Size of Array :";
      cin>>n;
      float x[n];
      float y[n];
      for (int i=0; i<n; i++)
      {
          cout<<"Enter the value of x["<<i<<"]:";
          cin>>x[i];
               cout<<"Enter the value of Y["<<i<<"]:";
          cin>>y[i];


      }
      cout <<"The Value of x[n] and y[n] is :\n\n";
      cout<<"x"<<"\t\t"<<"Y(x)"<<"\n\n";
      for (int i=0; i<n; i++)
      {
          cout<<x[i]<<"\t\t"<<y[i]<<"\n\n";

      }
   int diffi;
    cout<<"Enter the value of intrigation Index:\n";
    cin>>diffi;
    float diff;
    diff=(y[diffi+1]-y[diffi])/(x[diffi+1]-x[diffi]);
    cout<<"Numerical Differntiation :"<<diff;


 }

