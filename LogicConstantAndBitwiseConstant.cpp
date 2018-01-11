#include<vector>
class BigArray{

vector<int> v;//huge vector
mutable int accessCounter;
//** when mutable this variable can change in const function

int* v2; //another int array

public:
int getItem(int index) const{
//** accessCounter++;	//error in const function we can't modified member variable
const_cast<BigArray*>(this)->accessCounter++;
return v[index];

}

void setV2Item(int index, int x) const{
*(v2+index)=x;
}

};

int main(){
BigArray b;
}