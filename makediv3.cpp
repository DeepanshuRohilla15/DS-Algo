#include <bits/stdc++.h>
using namespace std;


#define rep(i ,a , b) for(int i=0 ; i <b; ++i)
#define sz(x) (int)(x).size()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

/*Sum of a number is divible by 3 then it is divisible by 3
  Sum of a number is divible by 9 then it is divisible by 9
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
         int n;
         cin>>n;
         for(int i=1;i<=n;i++)
         {
             if(i==1 || i==n)
             {
                 cout<<'3';
             }
             else
             {
                 cout<<'0';
             }
         }
         cout<<"\n";
  return 0;
         
    }
        
    return 0;
}