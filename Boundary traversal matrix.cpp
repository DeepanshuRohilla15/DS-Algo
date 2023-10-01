class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        
        for(int i=0; i<1; i++)
        {
            for(int j=0; j<m; j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        for(int i=m-1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                ans.push_back(matrix[j][i]);
            }
        }
        
        if(n == 1)
            return ans;
            
        for(int i=n-1;i<n;i++)
        {
            for(int j=m-2; j>=0; j--)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        
        if(m == 1)
            return ans;
            
        for(int i=n-2; i>=1; i--)
        {
            for(int j=0; j<1; j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};
