#include <vector>;
using namespace std;
class Solution {
  public:
    // Function to find maximum product subarray
    // Kadane's Algorithm for Maximum Product Subarray 
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    // This function returns the maximum product of a contiguous subarray
    int maxProduct(vector<int> &arr) {
       int maxi = INT_MIN;
       int prefix=1;int suffix=1;
       
       for(int i=0;i<arr.size();i++)
       {
          prefix=prefix*arr[i];
          suffix=suffix*arr[arr.size()-i-1];
          maxi=max(maxi,max(prefix,suffix));
          if(prefix==0)
          prefix=1;
          if(suffix==0)
          suffix=1;
       }
       return maxi;
    }
};