#include<iostream>
class unturn
{
private:
int x,y;
public:
unturn();
unturn(int,int);
friend unturn operator +(unturn,unturn);	//implement binary as friend with return
void display();
};
unturn::unturn()	//this default constructor is important to t
{
x=0;
y=0;
}
unturn::unturn(int a,int b)
{
x=a;
y=b;
}

unturn operator +(unturn p1,unturn p2)  	//definition :p1 and p2 objects data get
{
unturn t;
t.x=p1.x+p2.x;
t.y=p1.y+p2.y;
return t;
}

void unturn::display()
{
cout<<x<<"\n";
cout<<y<<"\n";
}

int main()
{
unturn p1(1,-2);
unturn p2(2,-5);
unturn p3;
p3=operator +(p1,p2);	//same to p3=p1+p2;
p3.display();
return 0;
}
