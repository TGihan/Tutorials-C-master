#include<iostream>
using namespace std;
class tdpoint{

private:
int x,y,z;

public:
tdpoint();
tdpoint(int,int,int);
void display();
friend tdpoint add(tdpoint,tdpoint,tdpoint);
~tdpoint();
};

tdpoint::tdpoint(){
x=0;
y=0;
z=0;
}

tdpoint::~tdpoint(){
cout<<"destructered";


}

tdpoint::tdpoint(int a,int b,int c){
x=a;
y=b;
z=c;
}

tdpoint add(tdpoint td1,tdpoint td2,tdpoint td3){
	
tdpoint temp;	
temp.x=td1.x+td2.x+td3.x;
temp.y=td1.y+td2.y+td3.y;
temp.z=td1.z+td2.z+td3.z;
return temp;

}
void tdpoint::display(){

cout<<"Point cordinate is "<<x<<","<<y<<","<<z<<"\n";
}


int main(){

tdpoint tdpoint1,tdpoint2,tdpoint3;
tdpoint1=tdpoint(2,4,3);
tdpoint2=tdpoint(5,2,1);
tdpoint3=add(tdpoint1,tdpoint2,tdpoint3);
tdpoint3.display();


return 0;
}
