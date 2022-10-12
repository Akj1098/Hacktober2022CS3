#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter a,b and c:";
    cin>>a>>b>>c;
    
    if(a>b && a>c)
    cout<<"largest number:"<<a;
    
    if(b>a && b>c)
    cout<<"largest number:"<<b;
    
    if(c>a && c>b)
    cout<<"largest number:"<<c;
}
