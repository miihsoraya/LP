#include <iostream>
using namespace std;

//float **add(float *);

int main(){

    char *palavra;
    palavra = new char[25];
    int i = 0;

    cin.getline(palavra,24);
    ///cout<<palavra;
    for(;*palavra != '\0' ; palavra++,i++);


    cout<<"\n"<<i;
}
