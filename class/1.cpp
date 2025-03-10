#include<iostream>
using namespace std;
class Student{
	public :
		string name;
		int age;
		double  percn;
		int Rollnum;
		
		
};
int main(){
	
	Student one;
	one.age=12;
	one.name="one";
	one.percn=32.33;
	one.Rollnum=1;
	Student two;
	two.age=13;
	two.name="two";
	two.percn=34.33;
	two.Rollnum=2;
	Student three;
	three.age=14;
	three.name="three";
	three.percn=33.33;
	three.Rollnum=3;
	cout<<one.age<<","<<one.name<<","<<one.percn<<","<<one.Rollnum<<endl;
	cout<<two.age<<","<<two.name<<","<<two.percn<<","<<two.Rollnum<<endl;
	cout<<three.age<<","<<three.name<<","<<three.percn<<","<<three.Rollnum<<endl;
	
	
}