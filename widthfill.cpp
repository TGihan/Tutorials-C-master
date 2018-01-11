#include<iostream.h>
int main(){

int no[]={101,102,103};
int mark[]={67,91,55};
int x;

cout.fill('<');
cout.width(15);
cout<<"Subject no";
cout.width(7);
cout<<"Marks";
cout<<"\n";

for(x=0;x<3;x++){
cout.width(15);
cout<<no[x];
cout.width(7);
cout<<mark[x];
cout<<"\n";
}

}
