#include <iostream>;
#include <string>;
#include <string.h>;
using namespace std;
int main (){
string s;
int n, i;
cin>>s;
n=s.length();
char v[n];
char v2 [10000000000];
strcpy(v, s.c_str());
for(i=0;i<n;i++){
	v2[10000000000]=v[i];
	v2[10000000000]=v[n];
	v[n]=v2[10000000000];
	v[i]=v2[10000000000];
	n--;
	}
	for (i=0;i<n;i++){
	cout<<v[i];
	}
	return 0;
}
