#include<iostream>
class mark
{
private:
int marks[4];
public:
void input();
void display();
};
void mark::input()
{ 
int x;
for(x=0;x<4;x++)
{
cout<<"Enter your mark ";
cin>>marks[x];
cout<<"\n";
}
}
void mark::display()
{
	int x;
for(x=0;x<4;x++)
{
cout<<marks[x];
cout<<"\n";
}
}
int main()
{
	int x;
	for(x=0;x<4;x++)
	{
	mark ob[x];
	ob[x].input();
	ob[x].display();
	}
	return 0;
}
