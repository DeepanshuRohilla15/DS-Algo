class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        vector<int> ans;
        
        int diff = INT_MAX;
        
        int i = n-1;
        int j = 0;
        
        while(i >= 0 && j < m) {
            int curDiff = abs(arr[i]+brr[j]-x);
            
            if(diff > curDiff) {
                ans.clear();
                ans.push_back(arr[i]);
                ans.push_back(brr[j]);
                
                diff = curDiff;
            }
            
            if(arr[i]+brr[j] > x) {
                i--;
            }
            else j++;
        }
        
        return ans;
    }
};
