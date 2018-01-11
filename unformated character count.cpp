#include<iostream.h>
int main(){

int count=0;
char c;
cout<<"input text ";
cin.get(c);

while(c!='\n'){
cout.put(c);
count++;
cin.get(c);
}
cout<<"\n the total number of characters are "<<count<<"\n";
}
