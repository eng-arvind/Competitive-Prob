#include<iostream>
using namespace std;
class Employee
{
public:
	int id;
	float salary;
	string name;
	Employee(int i,float f,string s)
	{
        id=i;
        salary=f;
        name=s;
	}
	void display()
	{
		cout<<id<<" "<<salary<<" "<<name<<endl;
	}
};
int main()
{
	Employee s1=Employee(100,2005,"arvind");
	Employee s2=Employee(200,3005,"aman");
	s1.display();
	s2.display();
	return 0;
}