#include<iostream>
using namespace std;
int main(){
	
	int row,column;
	cout<<"Enter a total row :";
	cin>>row;
	cout<<"Enter a total column :";
	cin>>column;
	int array[row][column];
	for(int i=0;i<row; i++){
		for(int j=0; j<column; j++){
			cout<<"Enter a array["<<i<<"] ["<<j<<"] :";
			cin>>array[i][j];
		}
	}
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			cout<<array[i][j];
		}
		cout<<endl;
	}
	int k=2;
	int sum=0;
	for(int i=0; i<row; i++){
      sum=sum+array[i][k];
      k--;
	}
	cout<<sum;
}
		 		     
        