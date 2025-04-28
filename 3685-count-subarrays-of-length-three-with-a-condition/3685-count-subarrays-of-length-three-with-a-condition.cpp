class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int res = 0;
        for (size_t i = 0; i < nums.size() - 2; i++) {
            if ((nums[i] + nums[i + 2]) * 2 == nums[i + 1]) {
                res++;
            }
        }
        return res;
    }
};