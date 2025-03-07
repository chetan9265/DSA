#include<iostream>
using namespace std;
 int main(){
 	char k='A';
 	for(char i='A';i<='E'; i++){
 		for(char j='A'; j<=i; j++){
 			cout<<k<<" ";
 			k++;
		 }
		 cout<<endl;
	 }
	 return 0;
}