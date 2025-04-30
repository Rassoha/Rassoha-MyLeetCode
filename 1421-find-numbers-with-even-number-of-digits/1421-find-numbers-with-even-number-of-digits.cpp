class Solution {
public:
    int countdig(int dig) 
    {
        int res = 0;
        for (; dig; res++) {
            dig = dig / 10;
        }

        return res;
    }
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for (auto i = nums.begin(); i < nums.end(); i++) {
            if (!(countdig(*i) % 2)) {
                res++;
            }
        }
        return res;
    }
};