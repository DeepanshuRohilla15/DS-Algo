class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            if(mp.find(arr[i]) != mp.end())
            {
                if(mp[arr[i]] == 1)
                    ans.push_back(arr[i]);
                mp[arr[i]]++;
            }
            else
                mp[arr[i]]++;
        }
        if(ans.size()==0)  return {-1} ;
        sort(ans.begin(),ans.end());
        return ans;
    }
};
