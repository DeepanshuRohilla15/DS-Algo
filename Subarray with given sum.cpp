class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> ans;
        int j=0;
        long long sum = arr[0];
        bool flag = false;
        for(int i=1; i<=n;i++){
            while(sum > s && j<i-1 )
            {
                sum -= arr[j];
                j++;
            }
            if(sum == s){
                ans.push_back(j+1);
                ans.push_back(i);
                flag = true;
                return ans;
            }
            if(i< n){
                sum += arr[i];
            }
        }
        return {-1};
        
    }
};
