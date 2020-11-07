#include <bits/stdc++.h>
using namespace std;

void main()
{
    int n, i=1;
    int sum=0;

    cout<<"Enter n:";
    cin>>n;

    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<<"Sum is "<<sum;
}