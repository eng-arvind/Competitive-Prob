#include<iostream>
using namespace std;
class student{
public:
	int id;
    string name;
    void insert(int i,string n)
    {
    	id=i;
    	name=n;
    }
    void display()
    {
    	cout<<id<<" "<<name<<endl;
    }
};
int main()
{
     student s1;
     student s2;
     s1.insert(100,"arvind");
     s2.insert(200,"kumar");
     s1.display();
     s2.display();
     return 0;
}