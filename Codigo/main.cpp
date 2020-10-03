#include <iostream>
#include "startShip.h"
#include "snake.h"


using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"\n**************";
    cout<<"\nMenu de Juegos";
    cout<<"\n**************";

    cout<<"\nSeleccione un Juego";
    cout<<"\n1 - Nave Estelar";
    cout<<"\n2 - Serpiente";
    cout<<"\n3 - Salir";
    cout<<"\nIngrese un numero del menu para jugar: ";
    cin>>n;
    
    switch(n){
        case 1:{
            system("cls");
            starShip();
            break;
        }
         case 2:{   
            system("cls");
            snake();
            break;
        }
          
        case 3:{
           system("cls");
           cout<<"\nGracias por Jugar :)";
           system("pause");
           system("exit");
            break;
        }
         Default:{
            cout<<"Ingrese una opcion valida";
            break;
        }
       
     }
         
    return 0;
}
