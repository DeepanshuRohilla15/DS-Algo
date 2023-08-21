class Solution {
public:

void bfs(int row, int col,vector<vector<int> >& matrix, int &count)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for(int delrow =-1; delrow<=1; delrow++)
    {
        for(int delcol=-1; delcol<=1; delcol++)
        {
            int nrow = row + delrow;
            int ncol = col + delcol;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && matrix[nrow][ncol]==0)
            {
                count++;   
            }
        }
    }
}
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int ans =0;
        int count=0;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==1)
                {
                    count =0;
                    bfs(i,j, matrix, count);
                    if(count%2==0 && count>0)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
