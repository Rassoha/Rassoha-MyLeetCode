class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum = 0, result = 0;
        auto left = nums.begin();
        for (auto right = nums.begin(); right < nums.end(); right++) {
            sum += *right;
            while (sum * (right - left + 1) >= k) {
                sum -= *left;
                left++;
            }
            result += right - left + 1;
        }
        
        return result;
    }
};