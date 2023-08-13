class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        int n = nums.size(), res = 1e9;
        multiset<int> st;

        for (int i = x ; i < n; i++) st.insert(nums[i]);

        for (int i = 0; i < n - x; i++) {
            auto it = st.lower_bound(nums[i]);
            if (it != st.end()) {
                res = min(res, abs(nums[i] - *it));
            }
            if (it != st.begin()) {
                --it;
                res = min(res, abs(nums[i] - *it));
            }
            st.erase(st.find(nums[i + x]));
        }
        return res;
    }
};//O(nlogn)