#include <iostream>
using namespace std;
int main ()
#define size 10
{
    float a[size] [size];
    int n,i,j,k;
    float c;
    cout<<"Enter the total Coeficiant value:";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        for (j=1; j<=n+1; j++)
        {
            cout<<" Enter The Value of A"<< i+1 <<j+1<<":";
            cin>>a[i][j];
        }

    }
    cout<<" The Coficiaant matrix"<<"\n";
    for (int i=1; i<=n; i++)
    {
        for (j=1; j<=n+1; j++)
        {
            cout<<a[i][j]<<"  ";

        }
        cout<<"\n";

    }
    for (int i=1; i<n; i++)
    {
        if(i>j)
        {


        for (j=i+1; j<=n; j++)
        {
            c=a[j][i]/a[i][i];
             for(k=1; k<=n+1; k++ )
        {
            a[j][k]=a[j][k]-(c*a[i][k]);
        }
        }
        }


    }
    cout<<" The After Coficiaant matrix"<<"\n";
    for (int i=0; i<n; i++)
    {
        for (j=0; j<n+1; j++)
        {
            cout<<a[i][j]<<"  ";

        }
        cout<<"\n";

    }



}
