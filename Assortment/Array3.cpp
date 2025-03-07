#include<iostream>
using namespace std; 
int main(){
	int a;
	cout<<"enter a :";
	cin>>a;
	int array1[a];
	for(int i=0; i<a; i++){
		cout<<"enter  a["<<i<<"] :";
		cin>>array1[i];
	}
	if(array1[0]<array1[0+1]){
		array1[0]==array1[0+1];
	}
	cout<<array1[0];
    	for(int j=0; j<a; j++){
        	for(int e=0; e<a; e++)
			{
		    	if(array1[e]<array1[e+1])
				{
		    	array1[e]+=array1[e+1];
	         	}
	        }
 	}
//	for(int k=0; k<a; k++){
//		cout<<array1[k];
//	}
}