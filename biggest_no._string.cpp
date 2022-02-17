// Form the biggest number from numeric string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s = "7404675292";
	sort(s.begin(),s.end(),greater<int>());
	
	cout<<s<<endl;
	return 0;
}
