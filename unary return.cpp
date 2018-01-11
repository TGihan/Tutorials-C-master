#include<iostream>
class unturn
{
private:
int x,y;
public:
unturn();
unturn(int,int);
unturn operator -();	//prototype is same to class name for return type
void display();
};
unturn::unturn()	//this default constructor is important to temp
{
x=0;
y=0;
}
unturn::unturn(int a,int b)
{
x=a;
y=b;
}

unturn unturn::operator -()  	//definition :return type of unary operator overloading 
{
unturn temp;
temp.x=-x;
temp.y=-y;
return temp;	//return value
}

void unturn::display()
{
cout<<x<<"\n";
cout<<y<<"\n";
}

int main()
{
unturn p(1,-2),p1;
p1=p.operator -();			//return value add to new object
p1.display();
return 0;
}
