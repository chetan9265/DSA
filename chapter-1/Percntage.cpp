#include<iostream>
using namespace std;
int main(){
	int perc;
	cout<< "Enter a percntage:";
	cin >> perc;
	if(perc>0 && perc<=33){
		cout << "student is Fail ";
	}
	if(perc>33 && perc<=40){
		cout << " student grade is E ";
	}
	if(perc>41 && perc<=50){
		cout << "student grade is D";
	}
	if(perc>51 && perc<=60){
		cout << "student grade is C";
	}
	if(perc>61 && perc<=70){
		cout << "student grade is B";
	}
	if(perc>71 && perc<=90){
		cout << "student grade is A";
	}
	if(perc>91 && perc<=100){
		cout << "student grade is A+";
	}
	
}