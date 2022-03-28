/*
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n=heights.size();
        
        vector<int>left(n,-1);
        vector<int>right(n,n);
        int ans=INT_MIN;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++)
        {
            while(st.top()!=-1&& heights[st.top()]>=heights[i] ) st.pop();
            
            if(st.top()!=-1)
                left[i]=st.top();
            
            st.push(i);
        } 
        
       
       stack<int>s;
        s.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            while(s.top()!=-1&&heights[s.top()]>=heights[i]) s.pop();
            
            if(s.top()!=-1)
            {
                right[i]=s.top();
            }
            
            s.push(i);
        }
        
        
        for(int i=0;i<n;i++)
        {
            
            int h = heights[i];
            int w = right[i]-left[i]-1;
            
            int area = h*w;
            ans=max(ans,area);
            
        }
        
        return ans;
    }
};
*/