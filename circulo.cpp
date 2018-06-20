#include <iostream>
using namespace std;

typedef struct _circulo
{
    int raio;
    int coordenada[2]; ///referente a X e Y

}circulo;

int main(){
int i, n, xmaior, xmenor, ymaior, ymenor;
circulo *circ;
cout << "Quantos circulos serao criados? ";
cin>> n;
circ = new circulo[n];
    for(i=0; i<n;i++){
        cout << "Coordenada de X e Y do circulo "<< i<<endl;
        cin>> circ[i].coordenada[0] >> circ[i].coordenada[1]; ///o circulo é igual, as coordenadas q sao diferentes sendo o X e o Y
        cout << "Raio do circulo "<< i << endl;
        cin>> circ[i].raio;
    }
    xmaior = circ[0].coordenada[0]+circ[0].raio;
    xmenor = circ[0].coordenada[0]-circ[0].raio; ///subtração, porque o circulo esta a esquerda e o raio tem que ser adicionado a esquerda
    ymaior = circ[0].coordenada[1]+circ[0].raio;
    ymenor = circ[0].coordenada[1]-circ[0].raio;

    for(i=0;i<n;i++)
    {
        if(circ[i].coordenada[0]+circ[i].raio>xmaior)
            xmaior = circ[i].coordenada[0]+circ[i].raio;
        if(circ[i].coordenada[0]-circ[i].raio<xmenor)
            xmenor = circ[i].coordenada[0]-circ[i].raio;
        if(circ[i].coordenada[1]+circ[i].raio>ymaior)
            ymaior = circ[i].coordenada[1]+circ[i].raio;
        if(circ[i].coordenada[1]-circ[i].raio<ymenor)
            ymenor = circ[i].coordenada[1]-circ[i].raio;
    }
    cout << " *" << xmenor << "," << ymaior << "==========*" << xmaior << "," << ymaior <<"\n\n\n";
    cout << " *" << xmenor << "," << ymenor << "==========*" << xmaior << "," << ymenor << "\n\n\n";
    cout << " Altura: " << ymaior - (ymenor)<< "\n\n\n";
    cout << " Largura: " << xmaior - (xmenor); /// caso o X ou o Y forem negativos, por isso a subtracao

}
