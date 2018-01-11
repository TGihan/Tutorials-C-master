#include<iostream.h>
#include<fstream.h>
class write{

private:
int cd,price,quan;
char des[10];
public:
void input();
void display();

};

void write::input(){

cout<<"enter Item code: ";
cin>>cd;
cout<<"enter Descrption: ";
cin>>des;
cout<<"enter price: ";
cin>>price;
cout<<"enter quantity: ";
cin>>quan;

ofstream file;
file.open("items.txt");
file<<cd<<"\n";
file<<des<<"\n";
file<<price<<"\n";
file<<quan<<"\n";
file.close();
}

void write::display(){

ifstream file;
file.open("items.txt");

while(file){
file>>cd;
file>>des;
file>>price;
file>>quan;

cout<<cd<<"\n";
cout<<des<<"\n";
cout<<price<<"\n";
cout<<quan<<"\n";
}

file.close();
}

int main(){

write w;
w.input();
w.display();
return 0;
}
