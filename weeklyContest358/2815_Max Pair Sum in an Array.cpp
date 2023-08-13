class Solution {
public:
    int maxSum(vector<int>& nums) {
       unordered_map<int,vector<int>> mpp;
       int maxi=-1,ans=-1;
       for(auto n:nums){
           maxi=-1;int t=n;
           while(t>0){
               int s=t%10;
               maxi=max(maxi,s);
               t/=10;
           }
           mpp[maxi].push_back(n);
       }
       for(auto [k,v]:mpp){
           if(v.size()>=2){
               sort(v.rbegin(),v.rend());
               ans=max(ans,v[0]+v[1]);
           }
       }
       return ans;
    }
};