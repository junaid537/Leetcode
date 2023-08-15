//2789. Largest Element in an Array after Merge Operations
//Not Prefix Sum , But Suffix Sum technique
class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long suffixSum=0;
        vector<long long> v;
        for(auto it : nums){
            v.push_back(it);
        }
        for(int i=nums.size()-1;i>=1;i--){
            if(v[i]>=v[i-1])v[i-1]=v[i]+v[i-1];
            cout<<v[i-1]<<endl;
        }
        return v[0];
    }
};