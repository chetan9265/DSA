#include<iostream>
using namespace std;
 int main(){
 	int k=1;
  	for(int i=5;i>=1; i--){
  		for(int k=2; k<=i; k++){
  			cout<<" "; 
		  }
 		for(int j=5; j>=i; j--){
 			if(k%2==0){
 				cout<<"1";
			 }
			 else{
			 	cout<<"0";
			 }
		 }
		 k++;
		 cout<<endl;
	 }
	 return 0;
}