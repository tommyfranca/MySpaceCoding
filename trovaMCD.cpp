#include <iostream> ;
using namespace std;
int trovaMCD (int n1, int n2, bool cond, int divisore){ 

if (cond) {
	return divisore;
}
else {
	if (n1>n2) {
		if (n1%n2==0) {
			divisore=n2;
			cond=true;
		}
		else {
			n2--;
		}
	}
	else {
		if (n2%n1==0) {
			divisore=n1;
			cond=true;
		}
		else {
			n1--;
		}
		
	}
	trovaMCD (n1, n2, cond, divisore);
	}
}
int main () {
	int n1=0, n2=0, divisore=0;
	bool cond=false;
	cin>>n1;
	cin>>n2;
	int ris;
	ris=trovaMCD (n1, n2, cond, divisore);
	cout<<ris;
	return 0;
}
