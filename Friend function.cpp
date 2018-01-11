#include<iostream>
class time
{
private:
int a,b;
public:
friend int sum(time); //implementation of friend function
time(int,int);
};
int sum(time s) 	//definition of friend function
{
return (s.a+s.b);
}
time::time(int x,int y)
{
	a=x;
	b=y;
}

int main(){
time ob(5,3);
cout<<sum(ob);		//friend function output canbe written only in main
}
