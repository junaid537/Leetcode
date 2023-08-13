//Sliding window
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> set;
        int ans=0;
        for(auto it:nums)set.insert(it);
        int distinctNumbers=set.size();
        //sliding window
        unordered_map<int,int> mpp;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(mpp.size()< distinctNumbers){
               mpp[nums[i]]++;
                
            }
            while(mpp.size()== distinctNumbers){
                ans+=(nums.size()-i);
                mpp[nums[j]]--;
                if(mpp[nums[j]]==0){mpp.erase(nums[j]);}
                j++;
                
            }
        }
        return ans;
    }
};