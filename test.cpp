#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int n;
    cout << "Enter string" <<endl;
    cin>>s1>>n;
    for (int i = 0; i <= s1.length(); i++)
    {
        if(n<i)
        {
            s2.at(i)=s1.at(i);
        }
        if(n>i)
        {
            s2.at(i-1)=s1.at(i);
        }
        if(i==s1.length())
        {
            s2.at(i)='\0';
        }
    }
    cout<<s2;
    return 0;
}

