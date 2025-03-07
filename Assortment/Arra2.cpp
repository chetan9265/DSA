#include<iostream>
using namespace std;
int main(){
	int n;
	cout <<"Enter a Total elements of Array : ";
	cin>>n;
	int array[n];
	int sum;
	for(int i=0; i<n; i++){
		cout <<"Enter a table "<<i<<": ";
		cin>>array[i];
		sum=array[i];
		
	}
	
	for(int j=0; j<n; j++){
		for(int k=1; k<=10; k++){
			cout<<array[j]<<" " << k <<" "<<array[j] *k <<endl;
		}
		cout<<endl;
	}
	
}