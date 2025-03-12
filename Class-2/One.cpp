#include<iostream>
using namespace std;

class Owner {
    string owner;
    string power;
    public:
    void set(string owner, string power) {
        this->owner = owner;
        this->power = power;
    }
    void get() {
        cout << "Owner Name: " << owner << endl;
        cout << "Power: " << power << endl <<endl;
    }
};
class Employe{
	string name;
    string salary;
    string role;
    public:
    void set(string name, string salary, string role) {
        this->name = name;
        this->salary = salary;
        this->role=role;
    }
    void get() {
        cout << "Employe Name: " << name << endl;
        cout << "Salary : " << salary << endl;
        cout<<"Role :"<<role<<endl<<endl;
    }
};
class Ceo{
	string name;
    string salary;
    public:
    void set(string name, string salary) {
        this->name = name;
        this->salary = salary;
    }
    void get() {
        cout << "Ceo Name: " << name<< endl;
        cout << "Salary : " << salary << endl<<endl;
    }
};

class Peon{
	string name;
    string salary;
    public:
    void set(string name, string salary) {
        this->name = name;
        this->salary = salary;
    }
    void get() {
        cout << "Peon Name: " << name<< endl;
        cout << "Salary : " << salary << endl<<endl;
    }
};

int main() {
    Owner s1;
    s1.set("Jeff Bezos", "Ceo to Peon");
    s1.get();
     Ceo s3;
    s3.set("Andy Jassy", "175,000");
    s3.get();
    
    Employe s4;
    s4.set("Rahul Sharma", "85,000","Full Stack Developer");
    s4.get();
    
    
    Peon s2;
    s2.set("Mohan Das", "All");
    s2.get();
    
    
   
    
    

    return 0;
}
