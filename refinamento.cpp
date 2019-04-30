#include<stdio.h>
#include <iostream>

using namespace std;

int refinado, t4, t3, t2, op;

void mensagem();

int main(){
    do{
        cout << "Escolha um nivel de refinamento:\n";
        cout << "2 - T2\n";
        cout << "3 - T3\n";
        cout << "4 - T4\n";
        cout << "0 - Fecha\n";
        cin >> op;
        switch(op){
            case 2: mensagem();
                    cin >> refinado;
                    t2 = refinado;
                    cout << "Voce ira precisar de " << t2 << " T2 para fabricar.";
                    break;

            case 3: mensagem();
                    cin >> refinado;
                    t3 = refinado*2;
                    t2 = refinado;
                    cout << "Voce ira precisar de " << t3 << " T3 e " << t2 << " T2 para fabricar.";
                    break;

            case 4: mensagem();
                    cin >> refinado;
                    t4 = refinado*2;
                    t3 = t4*2;
                    t2 = t3/2;
                    cout << "Voce ira precisar de " << t4 << " T4, " << t3 << " T3 e " << t2 << " T2 para fabricar.";
                    break;

            case 0: return(0);
                    break;

            default:cout << "Comando inválido!";


        }
    }while(op!=0);
}

void mensagem(){
    cout << "Digite o numero de refinados que deseja fazer: \n";
}
