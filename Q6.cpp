#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
    {
       stack<char>st;
       for(int i=0;i<s.size();i++)
       {
         char ch=s[i];
         if(ch=='{' || ch=='(' || ch=='[')
         {
            st.push(ch);
         }
         else
         {
            if(!st.empty())
            {
                if(ch==')' && st.top()=='(' || ch=='}' && st.top()== '{' ||ch==']' && st.top()=='[')
                {
                    st.pop();
                }
                else
                return false;
            } 
            else
            return false;
         }
       }
       if(st.empty())
       return true;
       else 
       return false; 
    }