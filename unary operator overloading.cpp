#include<iostream>
class unary
{
private:
int ado,pado;
public:
unary();
unary(int,int);
void display();
void operator -(); //implementation of unary operator
};
unary::unary()
{
ado=0;
pado=0;
}
unary::unary(int a,int b)
{
ado=a;
pado=b;
}
void unary::display()
{
cout<<ado<<"\n";
cout<<pado<<"\n";
}
void unary::operator-() //definiton of unary operator
{
ado=-ado;
pado=-pado;
}
int main()
{
unary p(4,-5);
p.display();
-p; //p.operator -();
p.display();
return 0;
}
