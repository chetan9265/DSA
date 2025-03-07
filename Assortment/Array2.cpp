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
	int min=array[0];
	for(int j=0; j<a; j++){
		if(min>array[j]){
			min=array[j];
		}
	}
	cout<<min;
}