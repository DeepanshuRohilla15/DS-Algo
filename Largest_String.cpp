/* Read n, followed by n strings and print the largest string and
   its length*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
      int n;
      cin>>n;

      char a[100];
      char largest[100];

      int len=0;
      int largest_len =0;

      cin.get();
      for(int i=0; i<n;i++)
      {
            cin.getline(a,100);
            len = strlen(a);
            if(len>largest_len)
            {
                  largest_len = len;
                  strcpy(largest,a);
            }
      }
      cout<<largest<<" and "<<largest_len<<"\n";
}