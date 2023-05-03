#include <iostream>
using namespace std; 
int main () {
	int *p;
	int n;
	int v[n];
	int num;
	cin>>n;
	for (int i=0; i<n; i++) {
	 p=&v[i];
	 cin>>num;
	 *p=num;
	}
	
	for (int i=0; i<n; i++) {
	p=&v[i];
	cout<<p;
	}
	
	
	for (int i=0; i<n; i++) {
	cout<<v[i];
	}
}
