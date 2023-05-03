#include <iostream>
using namespace std;
int partition (int a[], int p, int r){ //p=inizio - r=fine - a[]=array - i=indice inizio - j=indice fine 
    int pivot=a[p];

	int count = 0;
	for (int i = p + 1; i <= r; i++) {
		if (a[i] <= pivot) {
			count++;
		}		
	}
	
	int pivotIndex = p + count;
	swap(a[pivotIndex], a[p]); 

	int i = p, j = r;

    while (i < pivotIndex && j > pivotIndex) {

		while (a[i] <= pivot) {
			i++;
		}

		while (a[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(a[i++], a[j--]);
		}
	}

	return pivotIndex;
	
	}

void quicksort(int a[], int p, int r){
	if(p<r){
		int q=partition(a, p, r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

int main(){
	int g;
	cout<<"inserisci grandezza del vettore"<<endl;
	cin>>g;
	int a[g];
	for(int i=0;i<g;i++){
		cout<<"inserisci elemento"<<endl;
		cin>>a[i];
	}
	quicksort(a, 0 ,g-1);
    for(int i=0;i<g;i++){
    	cout<<a[i]<<" ";
	}
	return 0;
}

