#include<iostream>
#include<algorithm>
#include<cstring>

// char *strtok(char *s,char *delimiters)
// return a token on each subsequent call
// on the first call function should be passesd with sttring argument for 's'
// on subsequent calls we sould pass the string argument as null

using namespace std;

int main(){
      char s[100] = "Today is a rainy day";

      char *ptr = strtok(s," ");
      cout<<ptr<<"\n";

      while(ptr!=NULL){
            ptr = strtok(NULL," ");
            cout<<ptr<<"\n";
      }
}