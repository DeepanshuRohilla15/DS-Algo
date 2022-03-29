class Solution {
public:
    int minDeletion(vector<int>& nums) {
       int deli=0;
        int n= nums.size();
        for(int i=0;i<n-1;i++)
        {
            int shift= i-deli;
            if(nums[i]== nums[i+1] && shift%2==0){
                deli++;
            }
        }
        if((n-deli)%2==1) deli++;
        return deli;
    }
};