/*
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         map<int, int> map1, map2;
        vector<vector<int>> ans;
        for (auto i : nums1) ++map1[i];
        for (auto i : nums2) ++map2[i];
        vector<int> ans1;
        for (auto i : map1) {
            if (map2[i.first] == 0) ans1.push_back(i.first);
        }
        vector<int> ans2;
        for (auto i : map2) {
            if (map1[i.first] == 0) ans2.push_back(i.first);
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
*/