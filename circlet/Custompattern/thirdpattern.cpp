#include<iostream>
using namespace std;
int main(){
		for(int i=5; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<j;
		}
		for(int b=4; b>=i; b--){
			cout<<"  ";
		}
		for(int k=i; k>=1; k--){
			cout<<k;
		}
		cout<<endl;
	}
	
	
	
	for(int c=1; c<=5; c++){
		for(int d=1;d<=c; d++){
			cout<<d;
		}
		for(int a=4; a>=c; a--){
			cout<<"  ";
		}
		for(int e=c;e>=1; e--){
			cout<<e;
		}
		cout<<endl;
	}
	
}