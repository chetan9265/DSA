#include<iostream>
using namespace std;
int main(){
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