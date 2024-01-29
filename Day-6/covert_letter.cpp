// conver 'a' to 'A'

#include<iostream>
using namespace std;
char convertSmallToCaptial(char nameS)
{
    char ans = nameS-'a'+'A';
    return ans;
}
char convertCaptialToSmall(char nameC)
{
    char ans = nameC-'A'+'a';
}
int main()
{
    char nameS,nameC;
    cout<<"Enter small character:";
    cin>>nameS;

    cout<<"Enter Capital Character:";
    cin>>nameC;
    cout<<convertSmallToCaptial(nameS)<<endl;
    cout << convertCaptialToSmall(nameC);
}