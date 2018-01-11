#include<iostream>
class time
{
private:
int hour,minu;
public:

void gettime(int,int);
void puttime();
void sum(time,time);
};
void time::sum(time t1,time t2)
{

minu=t1.minu+t2.minu;
hour=minu/60;
minu=minu%60;
hour=hour+t1.hour+t2.hour;


}
void time::gettime(int a, int b)
{
hour=a;
minu=b;
}
void time::puttime()
{
cout<<hour<<"\n";
cout<<minu;
}
int main()
{
time t1,t2,t3;
t1.gettime(9,40);
t2.gettime(4,20);
t3.sum(t1,t2);
t3.puttime();
return 0;

}
