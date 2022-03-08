/*#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
    vector<int> nge(v.size());
    stack<int> st;
    for(int i=0;i<v.size();i++)
    {
        while(!st.empty() && v[i]> v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;

}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> nge = NGE(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<(nge[i]==-1 ? -1 : v[nge[i]])<<"\n";
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
stack<int> mystack;
cin >> n;
int arr[n],ans[n];
for(int i = 0;i < n;++i)
ans[i] = -1;
for(int i = 0;i < n;++i)
cin >> arr[i];
for(int i = 0;i < n;++i)
{
while(!mystack.empty() && arr[i] > arr[mystack.top()])
{
int a = mystack.top();
mystack.pop();
ans[a] = arr[i];
}
mystack.push(i);
}
for(int i = 0;i < n;++i)
cout << arr[i] << " " << ans[i] << endl;
return 0;
}