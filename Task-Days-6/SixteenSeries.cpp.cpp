#include<iostream>
using namespace std;
int main(){
	int num1=80;
	int num2=10;
	for(int i=0; i<=6; i++){
		cout<<num1<<" "<<num2<<" ";
		num1-=10;
		num2+=5;
	}
	return 0;
}