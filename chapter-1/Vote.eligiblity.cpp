#include<iostream>
using namespace std;
int main(){
	cout << "Enter a valid age :";
	int age;
	cin >> age;
	if(age<18){
		cout << "your not eligile to vote";
	}
	else if(age<=0){
		cout << "enter a valid age ";
	}
	else if(age>=100){
		cout << "enter a valid age";
	}
	else {
		cout << "your eligible to vote";
	}
	
}