#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=1;
    cout<<"Even numbers between 1 too 100 are:";

    while(n<=100)
    {
        if ((n%2)==0)
           cout<<n<<" ";
        n++;
    }
    return 0;
}