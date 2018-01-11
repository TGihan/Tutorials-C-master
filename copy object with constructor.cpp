#include<iostream>
class copy
{
private:
int no;
public:
copy(int);
copy(copy &); 		//implementation of copy constructor
void display();
};
copy::copy(int a)
{
no=a;
}
void copy::display()
{
cout<<no<<"\n";
}
copy::copy(copy &ob)	//definition of copy constructor &after copy object name
{
no=ob.no;
}
int main()
{
copy ob(3456);
copy ob1=ob;		//copy object and give to another object
ob.display();
ob1.display();
return 0;
}
