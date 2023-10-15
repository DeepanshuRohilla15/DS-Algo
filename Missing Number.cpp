class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num = 0, n = nums.size(), x = nums[0];
        for(int i=1; i<=n; i++)
        {
            num ^= i;
        }
        for(int i=1; i<n; i++)
        {
            x ^= nums[i];
        }
        return num^x;
    }
};
