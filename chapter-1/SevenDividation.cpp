#include<iostream>
using namespace std;
int main(){
	int number;
	cout <<"Enter a number :";
	cin >> number;
	if(number%7==0){
		cout <<"This number divide by 7";
	}
	else{
		cout << "This number is not divided by 7";
	}
}