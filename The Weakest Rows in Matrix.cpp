class Solution {
public:

    int findSoldierCount(vector<int> &row)
    {
        int left = 0, right = row.size()-1;
        while(left <= right)
        {
            int mid = (left + right)/2;
            if(row[mid]==1)
                left = mid+1;
            else
                right = mid-1;
        }
        return left;

    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

        for(int row=0; row<mat.size(); row++)
        {
            int soldierCount = findSoldierCount(mat[row]);
            minHeap.push({soldierCount, row});
        } 

        vector<int> weakestRow;
        while(k--)
        {
            weakestRow.push_back(minHeap.top().second);
            minHeap.pop();
        }

        
        return weakestRow;    
    }
};
