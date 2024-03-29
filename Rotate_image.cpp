#include<bits/stdc++.h>
using namespace std;

void display(int a[][100],int n){
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  cout<<a[i][j]<<" ";
            }
            cout<<"\n";
      }
}

void rotate(int a[][100],int n){

      //rever4se each row
      for(int row=0;row<n;row++)
      {
            int start_col=0;
            int end_col=n-1;
            while(start_col<end_col){
                  swap(a[row][start_col],a[row][end_col]);
                  start_col++;
                  end_col--;
            }
      }
      // to take transpose
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 if(i<j){
                  swap(a[i][j],a[j][i]);
                 }
            }
      }
}

void rotate_stl(int a[][100],int n){

      // Same thing using stl reverse method
      for(int i=0;i<n;i++){
            reverse(a[i],a[i]+n);
      }
      // to take transpose
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 if(i<j){
                  swap(a[i][j],a[j][i]);
                 }
            }
      }


}

int main()
{
   int a[100][100];
   int n;
   cin>>n;

   for(int i=0; i<n;i++){
      for(int j=0; j<n;j++){
            cin>>a[i][j];
      }
   }
   rotate(a,n);
   display(a,n);
}