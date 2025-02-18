#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a total  elements :";
	cin>>n;
	int array[n],array1[n];
	for(int i=0; i<n; i++){
		cout<<"Enter a array["<<i<<"] :";
		cin>>array[i];
	}
	for(int j=0; j<n; j++){
		array1[j]=array[j];
	}
	for(int k=0; k<n; k++){
		cout<<array1[k]<<" "<<array[k]<<" ";
	}
}