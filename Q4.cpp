#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s) 
{
        map<char,int> mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==s.size()-1)
            {
                ans+=mpp[s[i]];
            }
            else if(mpp[s[i]]>=mpp[s[i+1]])
            {
               ans+=mpp[s[i]];
            }
            else
            {
                ans-=mpp[s[i]];
            }
        }
        return ans;
}

int main()
{
    string s;
    cin>>s;
    int ans=romanToInt(s);
    cout<<ans;
}