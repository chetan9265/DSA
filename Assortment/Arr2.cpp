#include<iostream>
using namespace std;
 int main(){
 	int array[]={1,2,3,4,5,10};
 	int size=sizeof(array[0]);
 	int sum=0;
 	for(int i=0; i<size; i++){
 		sum+=array[i];
	 }
	 cout<<"Sum of all elements in the array :"<<sum<<endl;
 	
 	return 0;
 }