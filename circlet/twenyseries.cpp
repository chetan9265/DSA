#include<iostream>
using namespace std;
 int main(){
  	for(int i=5;i>=1; i--){
  		for(int k=4; k>=i; k--){
  			cout<<" "; 
		  }
 		for(int j=1; j<=i; j++){
 			if(j%2==1){
 				cout<<"1";
			 }
			 else{
			 	cout<<"0";
			 }
		 }
		 
		 cout<<endl;
	 }
	 return 0;
}