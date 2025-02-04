#include<iostream>
using namespace std;
int main(){
	int unit;
	cout << "Enter a Unit : ";
	cin>>unit;
	int Amount;
	if(unit>0 && unit<100){
		Amount=unit*0.5;
		cout<< "Pay amount :"<<Amount;
	}
	else if(unit>101 && unit<200){
		cout<< "Pay amount :"<<unit;
	}
	else if(unit>201 && unit<300){
		Amount=unit*1.5;
		cout << "Pay amount :"<<Amount;
	}
	else if(unit>301 && unit<500){
		Amount=unit*2;
		cout << "Pay amount :"<<Amount;
	}
	else if(unit>501 && unit<1000){
		Amount=unit*2.5;
		cout<< "Pay amount :"<<Amount;
	}
	else{
		Amount=unit*3;
		cout<< "Pay amount :"<<Amount;
	}
	return 0;
}