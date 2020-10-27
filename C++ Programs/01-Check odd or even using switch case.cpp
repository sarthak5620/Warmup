#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    switch(num%2){
case 0:
   cout<<num<<" is a even number";
    break;
case 1:
    cout<<num<<" is a odd number";
}
    return 0;
}