#include <iostream>
using namespace std; 
int main () {
	char *p;
	int n;
	char v[n];
	char v2[n];
	char num;
	cout<<"inserisci dimensione"<<endl;
	cin>>n;
	
	
	
	for (int i=0; i<n; i++) {
	 p=&v[i];
	 cin>>num;
	 *p=num;
	}
	
	
	for (int i=0; i<n; i++) {
	 p=&v2[i];
	 cout<<p;
	 *p=v[i];
	}
	
	cout<<"array scambiato"<<endl;
	for (int i=0; i<n; i++) {
	cout<<v2[i];
	}
}
