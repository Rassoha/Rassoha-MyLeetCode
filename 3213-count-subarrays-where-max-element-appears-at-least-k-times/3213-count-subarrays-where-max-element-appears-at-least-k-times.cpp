class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int max = 0;
        size_t res = 0;
        auto left = nums.begin();
        size_t count = 0;

        for (auto i = nums.begin(); i < nums.end(); i++) {
            if (*i > max) {
                max = *i;
            }
        }
        for (auto right = nums.begin(); right < nums.end(); right++) {
            if (*right == max) {
                count++;
            }
            while (count == k) {
                res += nums.size() - (right - nums.begin());
                if (*left == max) {
                    count--;
                }
                left++;
            }
        }
        return res;
    }
};