class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
         long long operations = 0;
        long long prev_bound = nums.back();
        
        for (auto it = nums.rbegin() + 1; it != nums.rend(); ++it) {
            long long num = *it;
            long long no_of_times = (num + prev_bound - 1) / prev_bound;
            operations += no_of_times - 1;
            prev_bound = num / no_of_times;
        }
        
        return operations;
    }
};
