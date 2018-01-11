#include<iostream> 
#include<string.h>
#include<stdio.h>
using namespace std;
/*
const very usefull in reference otherwise not usefull
const function can only another call const function
*/

class Dog{
 int age;
 char name;
 public:
 Dog(){age=3;name='d';}
 //const parameters
 //void setAge(const int a) {age=a;}//we can't increment(change) value of a because it is const
 
 //const return value
 const char& getName(){return name;}
 //const function
 void printDogName()const{cout<<name<<" const"<<"\n";}
 void printDogName(){cout<<getName()<<" non-const"<<"\n";}
 };
 
 int main(){
 Dog d;
 //int i=9;
 //d.setAge(i);
 //cout<<i<<"\n";
 d.printDogName();
 const Dog d2;
 d2.printDogName();
 }
 
