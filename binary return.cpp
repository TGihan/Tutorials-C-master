#include<iostream>
class unturn
{
private:
int x,y;
public:
unturn();
unturn(int,int);
unturn operator +(unturn &);	//reference p's original value
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

unturn unturn::operator +(unturn &temp)  	//definition :with return we want give place for p1
{
unturn t;
t.x=x+temp.x;
t.y=y+temp.y;
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
unturn p2(3,-4);
unturn p3;
p3=p1.operator+(p2); //same to p3=p1+p2;
p3.display();
return 0;
}
