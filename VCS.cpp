#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> ig(m);
        vector<int> tra(k);
        for(int i=0;i<m;i++)
        {
            cin>>ig[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>tra[i];
        }
        sort(ig.begin(),ig.end());
        sort(tra.begin(),tra.end());
        int i=0,j=0,count=0;
        while(i<m && j<k)
        {
            if(ig[i]==tra[j]){
                count++;
                i++;
                j++;
            }
            else if(ig[i]<tra[j])
            {
                i++;
            }
            else j++;
        }
        cout<<count<<" "<<(n+count)-(m+k)<<"\n";
    }
}