#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cout<<"enter total elements of array :";
	cin>>n;
    int array[n];
	for(int i=0; i<n; i++){
		 cout<<"Enter a array["<<i<<"] :";
		 cin>>array[i];
		 
	}	
	for(int j=0; j<n; j++){
		sum=sum + array[j];
	}
	cout<<"  Average of Array is :" <<sum/n;
	
}