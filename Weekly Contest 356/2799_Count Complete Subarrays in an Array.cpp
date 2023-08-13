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

//better
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>st ; for(auto &ig : nums)st.insert(ig) ;

        int total = st.size() , ans = 0 ; int n = nums.size() ;

        for(int i = 0 ; i < n ; i++){
            unordered_set<int>temp ;
            for(int j = i ; j < n ; j++){
                temp.insert(nums[j]) ;
                if(temp.size() == total)ans++ ;
            }
        }

        return ans ;
    }
};