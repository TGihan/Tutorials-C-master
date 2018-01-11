#include<iostream>
#include<fstream>
int main()
{
	


ifstream kock("hello.txt");
char ch;
while(!kock.eof())
{
kock.get(ch);
cout<< ch;
}
cout<<"\n";
kock.close();
return 0;
}
