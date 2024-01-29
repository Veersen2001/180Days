#include<iostream>
using namespace std;

int main()
{
    int ans=0,mul=1,rem=0;

    int num ;
    cout<<"Enter the binary Number";
    cin>>num;

    while(num!=0)
    {
        rem = num%10;
        ans = rem*mul+ans;

        mul = mul*2;

        num = num/10;

    }

    cout<<ans;
}