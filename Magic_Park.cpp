#include<iostream>
using namespace std;

void magical_park(char a[][100],int m, int n, int k, int s) {
      // he get out of park
      bool success = true;

      for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                  char ch = a[i][j];

                  // check
                  if(s<k){
                        success = false;
                        break;
                  }
                  else if(ch=='*'){
                        s +=5;
                  }
                  else if(ch=='.'){
                        s-=2;
                  }
                  else{
                        break;
                  }

                  // we also loose 1 point when we move right except last column
                  if(j!=n-1){
                        s--;
                  }
            }
      }
      if(success){
            cout<<"yes"<<"\n";
            cout<<s<<"\n";
      }
      else{
            cout<<"no"<<"\n";
      }
}

int main(){
      int m,n,k,s;
      cin>>m>>n>>k>>s;

      char park[100][100];
      // Take input
      for(int i=0;i <m;i++){
            for(int j=0;j<n;j++){
                  cin>>park[i][j];
            }
      }
      magical_park(park,m,n,k,s);

      return 0;
}