#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"enter a :";
	cin>>a;
	
	int array[a];
	for(int i=0; i<a; i++){
		cout<<"enter  a["<<i<<"]";
		cin>>array[i];
	}
	
	int max=array[0];
	for(int j=0; j<a; j++){
		if(max<array[j]){
			max=array[j];
		}
	}
	
	
	cout<<max;
	
}