#include<iostream>
using namespace std;
int main(){

cout.precision(3);
cout.fill('<');
int x;

for(x=0;x<5;x++){
cout.width(5);
cout<<x;
cout.width(10);
cout<<1/(float(x));
cout<<"\n";

}

}
