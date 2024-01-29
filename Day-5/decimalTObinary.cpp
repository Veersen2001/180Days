#include<iostream>
using namespace std;

int main()
{
    int num = 13,sum=0,mul=1,rem=0;

    while(num>0)
    {
        //  rem = num%2;
        rem = num & 1; //bitwise And operator
        // num = num/2;
        num = num>>1; //right shift
         sum = rem*mul+sum;
        mul=mul*10;
    }

    cout<<sum;

    
}