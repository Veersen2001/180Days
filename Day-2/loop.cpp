#include<iostream>

using namespace std;

int main()
{
    // for(int i = 0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
 /*  *****
     *****
     *****
     *****
     ***** */


    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // output

    /* 0 0 0 0
       1 1 1 1
       2 2 2 2
       3 3 3 3
    */

    // for (int i = 1; i < 5; i++)
    //     {
    //         for(int j=1;j<5;j++)
    //         {
    //             cout<<j*j<<" ";
    //         }
    //         cout<<endl;
    //     }

        /* output
                1 4 9 16
                1 4 9 16
                1 4 9 16
                1 4 9 16
        */
       
    //    int count = 1;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j < 5; j++)
    //     {
           
    //         cout <<count<< " ";
    //         count+=1;
    //     }
        
    //     cout << endl;
    // }

    /*
       output

        a a a a
        b b b b
        c c c c
        d d d d
    */

    for (int i = 5; i > 1; i--)
    {
        for (int j = 1; j < 5; j++)
        {
            cout<<"*"<<" ";
           
        }

        cout << endl;
    }

    return 0;
}