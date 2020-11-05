#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cout<<"Enter two numbers ";
    cin>>n1;
    cin>>n2;

    switch(n1>n2)
    {
        case 0:
            cout<<n2<<" is greater";
            break;
        case 1:
            cout<<n1<<" is greater";
            break;
    }
    return 0;
}