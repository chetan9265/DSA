#include<iostream>
using namespace std;
void table(int n){
	for(int i=1; i<=10; i++){
		cout<< n <<" * "<<""<<i<<" = "<<n*i<<endl;
	}
	cout<<endl;
}
 int main(){
 	table(4);
 	table(8);
 	
 }