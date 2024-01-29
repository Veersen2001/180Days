#include<iostream>
using namespace std;

int main()
{
     int row;
     int col;

     for(row=1;row<=7;row++)
     {
        // space printing
        for(col=1;col<=7-row;col++)
        {
            cout<<" ";
        }
        /*
                A
     A B
    A B C
   A B C D
  A B C D E
 A B C D E F
A B C D E F G
        */
        // character printing
        // for( char name='A';name<='A'+row-1;name++)
        // {
        //     cout<<name<<" ";
        // }

        /*

        1
       2 1
      3 2 1
     4 3 2 1
    5 4 3 2 1
   6 5 4 3 2 1
  7 6 5 4 3 2 1
        */

        for (col = 1; col <= row; col++)
        {
            cout <<col<< " ";
        }

        for(col = row-1; col>=1; col--)
        {
            cout<<col<< " ";
        }

        cout<<endl;
     }
}