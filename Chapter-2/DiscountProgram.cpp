#include<iostream>
using namespace std;
int main(){
	int Amount;
	cout << "Enter a  Total amount :";
	cin >> Amount;
	int Discount;
	if(Amount>=0 && Amount <=1000){
	   	Discount=Amount*5/100;
		cout << "Give a " <<Discount<<  " Discount";
	}	
	if(Amount>=1001 && Amount <=5000){
		Discount=Amount*10/100;
		cout << "Give a " <<Discount << " Discount";
	}if(Amount>=5001 && Amount <=25000){
		Discount=Amount*20/100;
		cout << "Give a " <<Discount << " Discount";
	}
	if(Amount>=25001 && Amount <=50000){
		Discount=Amount*25/100;
		cout << "Give a " <<Discount << " Discount";
	}
	
	
}