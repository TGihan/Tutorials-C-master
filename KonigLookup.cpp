#include<iostream>
using namespace std;
/*
Name Lookup sequence
with namespaces:
current scope=>next enclosed scope =>...=> globel scope

To override the sequence:
1: qualifier or using declaration
2. koenig lookup

with classes:
current class scope =>parent scope=> ... =>global scope

To override the sequence:
-Qualifier or using declaration
Name hiding

*/

/*
//Example 1
namespace A{
struct X{};
void g(X){
cout <<"Hello Calling A:g()\n";
}
}

int main(){
A::X x1;
g(x1);		//koenig lookup or argument dependent lookup ADL
			//cannot include to class only namespaces
			//without A Worked
}

**********************************************************************
*/
/*
//Example 2
class F{
public:
struct Y{};
static void h(Y){cout <<"Hello C::h()\n";}
};

int main(){
F::Y y;
h(y);	//error
		//without C not work
}
**********************************************************************
*/
/*
//Example 3
namespace B{
struct X{};
void g(X) {cout<<"Calling B::g()\n";}
}

class C{
public:
void g(B::X){cout<<"Calling C::g()\n";}
void j(){
B::X x;
g(x);
}
};


int main(){
C::j();		//error compiler see dual g function 
}

int main(){
C c;
c.j();	//compiler find g function in class c scope if not found(comment line 62)
		// find in globel scope namespace B and  execute line 57 g function
}
********************************************************************
*/

//Example 4
namespace E{
struct X{};
void g(X) {cout<<"Calling B::g()\n";}
}

class D{
public:
void g(E::X){cout<<"Calling D::g()\n";}
};

class C:public D{	//member function have high priority than globel function
public:
void j(){
E::X x;
g(x);
}
};

/*
int main(){
C::j();		//error compiler see dual g function 
}
*/
int main(){
C c;
c.j();	//compiler find g function in class c scope if not found(comment line 62)
		// find in globel scope namespace B and  execute line 57 g function
}
