#include <iostream>

using namespace std;

struct CaixaSom{
    int volume;
    bool ligado;
    

void ligar(){
    ligado = true;
};
void desligar(){
    ligado = false;
};

void aumentarVolume(){
    if (ligado==true){
        volume++;
    }
        
};
void diminuirVolume(){
    if (ligado==true){
        volume--;
        
    }
}
};

int main(){
    CaixaSom c;
    c.ligar();
    cout << c.ligado;
    c.aumentarVolume();
    return 0;
}
