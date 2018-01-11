#include<iostream>
#include<string>
using namespace std;
class area
{
private:
int hei,wei,ans;
public:
area();
area(int,int);
void display();
};
area::area()
{
hei=0;
wei=0;
ans=0;
}
area::area(int a,int b)
{
hei=a;
wei=b;

}
void area::display()
{
	ans=hei*wei;
cout<<ans;

}
int main()
{
area ob(4,3);
ob.display();


}
