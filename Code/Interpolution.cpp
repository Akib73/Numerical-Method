#include<iostream>
#include <bits/stdc++.h>
using namespace std ;

float cal_p (float p, int n)
{

    float temp= p;
    for(int i=1; i<n; i++)
    {

        temp = temp*(p-i);
    }
    return temp;
}
int cal_fact(int n)
{
    int f=1;
    for (int i=2; i<=n; i++)
    {
        f*=i;
    }
    return f;
}

int  main ()
{

    int n;

    cout<<"Enter  the number of Total Known value:";
    cin>>n;
    float x[n];
    float y[n][n];
    for(int i=0; i<n;  i++)
    {
        cout<<"Enter the value (x"<<i+1<<")"<<":";
        cin>>x[i];
    }


    for (int i=0; i<n; i++)
    {

        cout<< " Enter the value of (y"<<i+1<<")"<<":";
        cin>>y[i][0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
    }

    cout<<"\n Forward Difference table:\n";

    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << x[i]
             << "\t";
        for (int j = 0; j < n - i; j++)
            cout << setw(4) << y[i][j]
                 << "\t";
        cout << endl;
    }
    float value ;
    cout <<" Enter the Unknown value :";
    cin>> value;
    float p;
    p=(value-x[0])/(x[1]-x[0]);
    float sum = y[0][0];
    for (int i=1; i<n; i++)
    {
        sum= sum + (cal_p(p,i)*y[0] [i])/cal_fact(i);

    }
    cout<<" The value of  y("<<value<<")"<<":"<<sum;

}
