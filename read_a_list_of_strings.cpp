#include<bits/stdc++.h>
using namespace std;


int main()
{
    char a[100][100];

    // Read a list of strings and we will store them in a character array
    int n;
    cin>>n;
    cin.get();

    for(int i=0;i<n;i++){
      cin.getline(a[i],1000);
    }
    //Print out all the strings
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<"\n";
    }
}