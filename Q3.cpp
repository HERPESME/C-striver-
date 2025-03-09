#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) 
{ 
    int m=x;
    int b,sum=0;
    if(x<0)
    return false;
    while (x!=0)
    {
        b=x%10;
        sum=sum*10+b;
        x=x/10;
    }   
    if(sum==m)
    {
        return true;
    }
    return false;   
}
int main()
{
    int x;
    cin>>x;
    bool c=isPalindrome(x);
    if(c)
    cout<< "true";
    else
    cout<<"false"; 
}