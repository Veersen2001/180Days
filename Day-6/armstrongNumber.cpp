// find armstrong number
#include<iostream>
#include<math.h>
using namespace std;

int countDigit(int number)
{
    int count=0;
    while(number!=0)
    {
        number=number/10;
        count++;
    }

    return count;

}

int armstrong(int digit,int num)
{
    int rem,ans=0;
    while(num!=0)
    {
        rem = num%10;
        ans = ans+pow(rem,digit);
        num=num/10;
    }
    return ans;
}

int main()
{
    int number;
    cout<<"Enter the Number";
    cin>>number;
    int digit=countDigit(number);
    cout<<"digit is:"<<digit<<endl;
    int arm = armstrong(digit,number);

    if(number == arm)
    {
        cout<<"Number is armstrong number:"<<arm;
    }
    else{
        cout<<"Number is not armstrong number:"<<arm;
    }
}