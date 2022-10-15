#include"src\dynArr.cpp"
#include <iostream>
using namespace std;
int main(){
    dynArr<int> di(10);
    dynArr<double> dd(10);
    for(int i=0;i<10;i++){
        di.setValue(i,3*i+1);
        dd.setValue(i,7.29*i/1.45);
    }
    for(int i=0;i<10;i++){
      cout<<  di.getValue(i)<<endl;
      cout<<  dd.getValue(i)<<endl;
    }
}
