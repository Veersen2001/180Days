#include<iostream>
using namespace std;

int main()
{
    // for(int i=1;i<=10;i+=3)
    // {
    //     cout<<" "<<i;
    // }
    int n;
    cin>>n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n<<"*"<<i<<"="<< n*i<<endl;
    }
    return 0;


}