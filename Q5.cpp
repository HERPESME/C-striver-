#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) 
   {/*
string res="";
 for(int i=0;i<strs[0].size();i++)
{
for (auto s:strs)
{
if(s[i]!=strs[0][i])
return res;
}
res+=strs [0][i];
}
return res;*/
 //// APPROACH 2
  string ans = "";
sort(strs.begin(), strs.end());
int i=0;
while(i<strs[0].length() and strs[0][i] == strs[strs.size()-1][i])
{
ans+=strs[0][i];
i++;
}
return ans;
}

 