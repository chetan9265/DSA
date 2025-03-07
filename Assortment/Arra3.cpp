#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< "enter a total elements of array :";
	cin>>n;
	int array[n];
	for(int i=0; i<n; i++){
		cout<<" Enter a array ["<<i<<"] :";
		cin>>array[i];
	}
	for(int k=n-1; k>=0; k--){
		cout<<array[k];
	}
	
}