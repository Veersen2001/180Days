#include<iostream>
using namespace std;

int main()
{
    // first Way
    /* int n,count0=0,count1=0;
     cout<<"Enter the number";
      cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     // input =>[0,1,1,0]
     // output =>[0,0,1,1]
     for(int i=0;i<n;i++)
     {
         if(a[i]==1)
         {
             count1+=1;

         }
         else{
             count0+=1;
         }
     }
     cout<<"count 0 is:"<<count0<<endl;
     cout<<"count 1 is:"<<count1<<endl;

     for(int i=0;i<count0;i++)
     {
         a[i]=0;
     }

     for(int i=count1-1;i<n;i++)
     {
         a[i]=1;
     }

     for(int i=0;i<n;i++)
     {
         cout<<"["<<a[i]<<"]";
     }
     */

    // Two pointer

    int n, start = 0;
    cout << "Enter the number";
    cin >> n;
    int a[n],end = n-1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while(start<end)
    {
        if(a[start] == 0)
        {
            start++;
        }
        else{
            int temp;
            if(a[end]==0)
            {
                temp=a[start];
                a[start]=a[end];
                a[end]=temp;
                start++;
                end--;
            }
            else{
                end--;
            }
        }
    }
    // input =>[0,1,1,0]
    // output =>[0,0,1,1]

    for (int i = 0; i < n; i++)
    {
        cout << "[" << a[i] << "]";
    }
}