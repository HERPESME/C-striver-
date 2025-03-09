
// Non optimum approach 
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
{
/*vector <int> result;
for(auto it1=nums.begin();it1!=nums.end();it1++)
  {
   auto it2=find(nums.begin()+1,nums.end(),target-*it1);
   if(it2!=nums.end())// found the number
   {
    result.push_back(it1-nums.begin());
    result.push_back(it2-nums.begin());
    break;
  }
}
return result;*/
// using map for optimum approach
 unordered_map<int,int> mpp;
 for(int i=0;i<nums.size();++i)
 {
    int num=nums[i];
    int complement=target - num;
    auto it=mpp.find(complement);
    if(it!=mpp.end())
    {
        return {it->second,i};
    }
    mpp[num]=i;
 }
 return{}; 
}

    