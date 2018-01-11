#include<iostream>
using namespace std;
class tdpoint{

private:
int x,y;
public:
tdpoint();
tdpoint(int,int);
void display();
friend tdpoint add(tdpoint,tdpoint);

};

tdpoint::tdpoint(){
x=0;
y=0;
}

tdpoint::tdpoint(int a,int b){
x=a;
y=b;
}

void tdpoint::display(){

cout<<"Point cordinate is "<<x<<","<<y<<"\n";
}

tdpoint add(tdpoint td1,tdpoint td2){
	
tdpoint temp;	
temp.x=td1.x+td2.x;
temp.y=td1.y+td2.y;
return temp;
}

int main(){

tdpoint tdpoint1,tdpoint2,tdpoint3;
tdpoint1=tdpoint(6,2);
tdpoint2=tdpoint(3,1);
tdpoint3=add(tdpoint1,tdpoint2);
tdpoint3.display();


return 0;
}
