class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
         int n = matrix.size();
        int m = matrix[0].size();
        
        set<int> rows, cols;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 1)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        
        for (auto i : rows)
        {
            for (int j = 0; j < m; j++)
                matrix[i][j] = 1;
        }
        
        for (auto i : cols)
        {
            for (int j = 0; j < n; j++)
                matrix[j][i] = 1;
        
    }
    }
};
