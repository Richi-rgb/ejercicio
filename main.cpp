#include <iostream>
#include <math.h>
#define G 9.81
#define pi 3.141617

using namespace std;

// Estas son las caracteristicas del disparo ofensivo
struct Do{
    float d = 800;
    float Ho = 100;
    float Xo = 0;
    float Yo = Ho;
    float d0 = 0.05 * d;
};

// Estas son las caracteristicas del disparo defensivo
struct Dd{
    float d = 800;
    float Hd = 20;
    float Xd = d;
    float Yd = Hd;
    float d0 = 0.025 * d;
};

void ImprimirResultados(int angle, int)

void DisparoOfensivo(Do disparoO, Dd disparoD, int Vo){
    int flag = 0;
    float x, y;
    float Vxo, Vyo;
    float Vi = 0;
    int t = 0;
    int angle = 0;
    for(Vi = Vo;;Vi+=5){
        for(angle=0;angle<90;angle++){
            Vxo = Vi * cos(angle * pi / 180);
            Vyo = Vi * sin(angle * pi / 180);
            x = 0.0;
            y = 0.0;
            for(t = 0;;t++){
                x = Vxo * t;
                y = disparoO.Yo + Vyo * t - (0.5 * G * t * t);
                if(sqrt(pow((disparoD.Xd-x),2) + pow((disparoD.Yd-y),2)) < disparoO.d0){
                    if(y<=) y=0;
                    ImprimirResultados(angle,Vi,x,y,L);
                    flag += 1;
                    Vi += 50;
                    break;
                }
                if(y < 0) break;
            }
            if(flag == 3) break;
        }
        if(flag == 3) break;
    }
    if(flag != 3) cout << "No impacto ningun disparo";
}

int main()
{
    Do disparoO;
    Dd disparoD;
    int Vo;
    cout << "Ingrese Vo desde la cual quiere probar: ";
    cin >> Vo;
    DisparoOfensivo((disparoO,disparoD,Vo);)

    return 0;
}
