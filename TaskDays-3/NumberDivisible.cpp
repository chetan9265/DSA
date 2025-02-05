#include<iostream>
using namespace std;
int main(){
	int i,num;
	cout<< "Enter a number :";
	cin>>i;
	cout<< "Enter a second number";
	cin>>num;
	
	if(i%num==0)
	{
		cout<< "is number divisible";
	}
	else{
		cout<< "is not divisible";
	}
	
	return 0;
}