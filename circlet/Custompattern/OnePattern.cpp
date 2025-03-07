#include<iostream>
using namespace std; 
int main(){
	for(int i=5; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
	for(int k=1; k<=5; k++){
		for(int b=1; b<=k; b++){
			cout<<b;
		}
		cout<<endl;
	}
	return 0;
}