class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
  vector<int> piles;
        
        for (int i = 0; i < n; i++) {
            auto it = lower_bound(piles.begin(), piles.end(), a[i]);
            if (it == piles.end()) {
                piles.push_back(a[i]);
            } else {
                *it = a[i];
            }
        }
        
        return piles.size();
    }
};
