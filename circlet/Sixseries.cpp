#include<iostream>
using namespace std;
 int main(){
 	int k=5;
  	for(int i=5;i>=1; i--){
  		for(int k=2; k<=i; k++){
  			cout<<" "; 
		  }
 		for(int j=5; j>=i; j--){
 			cout<<k<<"";
		 }
		 k--;
		 cout<<endl;
	 }
	 return 0;
}