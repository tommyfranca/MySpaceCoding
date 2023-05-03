#include <iostream>
using namespace std;
int partition (int a[], int p, int r){ //p=inizio - r=fine - a[]=array - i=indice inizio - j=indice fine  
    int pivot=a[p];
    int i=p-1;
    int j=r;
    int t;
    	do{
		do{
		   j=j-1;
		}while(a[j]>pivot);
		
		do{
			i=i+1;
		}while(a[i]<pivot);
			
		if(i<j){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	}while(i<j);
	return j;
	}

int quicksort(int a[], int p, int r){
	if(p<r){
		int q=partition(a, p, r);
		quicksort(a,p,q);
		quicksort(a,q+1,r);
	}
}

int main(){
	int p, r, g, rich;
	cout<<"inserisci grandezza del vettore"<<endl;
	cin>>g;
	int a[g];
	for(int i=0;i<g;i++){
		cout<<"inserisci elemento"<<endl;
		cin>>a[i];
	}
	rich=quicksort(a, 0 ,g-1);
    for(int i=0;i<g;i++){
    	cout<<a[i];
	}
	return 0;
}

