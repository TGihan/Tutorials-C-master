#include<iostream>
/*
const
A compile tile constraint that an object can't be modified

why use const
a.) Guards against inadvertent write to the variable
b.) self documenting
c.) Enables compiler to do more optimization, making code tighter
d.) const means the variale can be put in ROM
*/

int main(){
const int i=9;
//i=6; //error
const_cast<int&>(i)=6;

/*
const int *p1=&i; //data is const pointer is not
p1++;

int* const p2; //pointer is const data is not

const int* const p3; //data and pointer are both const

int const *p4=&i;
const int *p4=&i;*/

//if const is on the left of*, data is const
//if const is on the right of*, pointer is const 
}