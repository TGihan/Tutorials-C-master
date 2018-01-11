#include<iostream>
class thr
{
private:
int x,y,z;
public:
thr();
thr(int,int,int); 
thr(thr &s);
void display();
};
thr::thr()
{
x=0;
y=0;
z=0;
}
thr::thr(int a,int b,int c)
{
x=a;
y=b;
z=c;
}
thr::thr(thr &s)
{
x=s.x;
y=s.y;
z=s.z;
}
void thr::display()
{
cout<<x;
cout<<y;
cout<<z<<"\n";
}
int main()
{
thr ob(4,5,7);
ob.display();
thr ob1=ob;
ob1.display();
return 0;


}




