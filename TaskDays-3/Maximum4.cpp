#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout << "enter a,b,c,d :";
	cin>>a>>b>>c>>d;
	if(a>b){
		if(a>c){
			if(a>d){
				cout <<"a is max";
				
			}
			else{
				cout<< " d is max";
			}
			
		}
		else{
			if(c>d){
				cout << " c is max";
			}
			else{
				cout << "d is max";
			}
			
		}
		
}
else{
	if(b>c){
		if(b>d){
			cout << " b is max";
			
		}
		else{
			cout << "d is max";
		}
	}
	else{
		if(c>d){
				cout << " c is max";
			}
			else{
				cout << "d is max";
			}
		
	}
}

}