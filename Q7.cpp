//HASHING
/* SIMPLE
int n;          
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];            
}
int hash[10^5]={0};
for(int i=0;i<n;i++)
{
hash[arr[i]]+=1;          hash[arr[i]-'a']++;
}
for(int i=0;i<n;i++)
{
cout<<hash[arr[i]];
}
*/



/*using unordered map
int n; 
cin>>n;
arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
unordered_map<int,int>mpp;
for(int i=0;i<n;i++)
{
mpp[arr[i]]++;   <key,value> key->value
}
if TLE occurs use map

*/