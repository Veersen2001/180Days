#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5);
    // insert new element in vector :  a new element at the end of the vector.
    // v.push_back(2);
    // v.push_back(3);
    cout<<"Enter the element:";
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<"index:"<<i<<"element is:"<<v[i]<<endl;
    }
    return 0;
}