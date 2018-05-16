#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char jogo[7][7]={"ABCDE","EFGHI","JKLMN","OPQRS","TUVXZ"};
    char *encontra;
    char busca[6] = {"EFGHI"};
    int i;
        for(i=0;i<5;i++){
            encontra=strstr(jogo[i],busca);
            if(encontra != NULL ){
                cout << "encontrada na horizontal";
                i+=1;
            }
        }


}
