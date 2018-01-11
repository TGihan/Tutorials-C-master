#include<iostream>
#include<string>
class  circle
{
private:
int rad;
int col;
public:
circle();
circle(int);
circle(int,int);
void display();
};


circle::circle()
{
rad=0;
col=0;
}
circle::circle(int a)
{
rad=a;
col=0;
}
circle::circle(int c,int b)
{
rad=c;
col=b;

}
void circle::display()
{
cout<<rad;
cout<<col<<"\n";
}
int main()
{
circle ob(7);
circle ob1(14,100);
ob.display();
ob1.display();
return 0;
}
