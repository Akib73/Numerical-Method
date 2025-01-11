#include<iostream >
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
    int start;
    int endd;
    float h,m;
    cout<<"Enter Initial Value:";
    cin>>start;
    cout<<"Enter End Index:";
    cin>>endd;
    h=(x[endd]-x[start])/(endd-start);
    m=y[start]+y[endd];
    float k=0;
    for (int i=start+1; i<endd; i++)
    {

        k=k+y[i];
    }
    float result;

    result=(h/2)*(m+2*k);
    cout<<"Numerical Intrigetion :"<<result;

 }
