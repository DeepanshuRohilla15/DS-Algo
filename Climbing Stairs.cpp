class Solution {
public:
       
    int climbStairs(int n) {
         if(n == 1)
            return 1;
        int left = 1;
        int right = 2;
        for(int i = 0; i < n - 2; i++)
        {
            int temp = left + right;
            left = right;
            right = temp;
        }
        return right;
    }
};