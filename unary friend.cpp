#include<iostream>
class unturn
{
private:
int x,y;
public:
unturn();
unturn(int,int);
friend void operator -(unturn &);	//reference p's original value
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

void operator -(unturn &temp)  	//definition :we not use friend we want to give place for p
{
temp.x=-temp.x;
temp.y=-temp.y;
}

void unturn::display()
{
cout<<x<<"\n";
cout<<y<<"\n";
}

int main()
{
unturn p(1,-2);
operator -(p);	//this way use to call friend function
p.display();
return 0;
}
