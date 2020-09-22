#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][3];

void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes) ";libros[0][2]=" Fransheco Piari";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos ";libros[1][2]=" Marlo Tabora";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos ";libros[2][2]=" Nelson Martinez, Gaby Alamacen";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion ";libros[3][2]=" Thomas Tren";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos ";libros[4][2]=" Zuany Lopez";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos ";libros[5][2]="William Guerra,Jazmin Guerra";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1 ";libros[6][2]="Federica Peluche";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005) ";libros[7][2]="Mario Garcia";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011) ";libros[8][2]="Enzo Auditore";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013) ";libros[9][2]="Poseido Energy";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos ";libros[10][2]="Kojima,Metal Gear";
	libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Breves Notas sobre Automatas y Lenguajes ";libros[11][2]=" Kevin Zavala";
	libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Breves Notas sobre Teoria de la Computacion ";libros[12][2]=" Lily Bellavista";
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Compendio de Ingenieria del Software ";libros[13][2]="Wendy Enamorado,Eduardo Cartagena";
	libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Diseno agil con TDD ";libros[14][2]=" Fransheco Piari";
	libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion ";libros[15][2]=" Silvestre,Piolin";
	libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Scrum & Extreme Programming (para programadores) ";libros[16][2]=" Roy Mustang,King Bratley";
	libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Scrum y XP desde las trincheras ";libros[17][2]=" Alphonse Zelaya";
	libros[18][0] = "Miscelaneos"; libros[18][1] = "97 cosas que todo programador deberia saber ";libros[18][2]=" Stinck Jack";
	libros[19][0] = "Miscelaneos"; libros[19][1] = "Docker ";libros[19][2]=" Connor Alvarez,Sara Alvarado";
	libros[20][0] = "Miscelaneos"; libros[20][1] = "El camino a un mejor programador ";libros[20][2]=" Juanco Scofet,Sonia Escobar";
	libros[21][0] = "Miscelaneos"; libros[21][1] = "Introduccion a Docker ";libros[21][2]=" Desconocido a";
	libros[22][0] = "Miscelaneos"; libros[22][1] = "Programacion de videojuegos SDL ";libros[22][2]=" Erensto Andres";
	libros[23][0] = "PHP"; libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural ";libros[23][2]=" Pilar Otono";
	libros[24][0] = "PHP"; libros[24][1] = "PHP y Programacion orientada a objetos ";libros[24][2]=" Vera keyes,Cinclair Dominig";
	libros[25][0] = "PHP"; libros[25][1] = "POO y MVC en PHP ";libros[25][2]=" Ikaro Vuelobajo";
	libros[26][0] = "PHP"; libros[26][1] = "Silex, el manual oficial ";libros[26][2]=" Doris Gutierres";
	libros[27][0] = "PHP"; libros[27][1] = "Symfony 1.4, la guia definitiva ";libros[27][2]=" Shawn Carter";
	libros[28][0] = "PHP"; libros[28][1] = "Symfony 2.4, el libro oficial ";libros[28][2]=" Kade Anderson, Jade Rose";
	libros[29][0] = "Python"; libros[29][1] = "Aprenda a pensar como un programador (con Python) ";libros[29][2]=" Chester Park";
	libros[30][0] = "Python"; libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python ";libros[30][2]=" Selina Carter,Bruce Wayne";
	libros[31][0] = "Python"; libros[31][1] = "Inmersion en Python ";libros[31][2]=" Tony Stark ";
	libros[32][0] = "Python"; libros[32][1] = "Inmersion en Python 3 ";libros[32][2]="Tony Stark, Bruce Banner";
	libros[33][0] = "Python"; libros[33][1] = "Introduccion a la programacion con Python ";libros[33][2]="Dilan Espumoni";
	libros[34][0] = "Python"; libros[34][1] = "Introduccion a Programando con Python ";libros[34][2]="Leo Scot Kennedy";
	libros[35][0] = "Python"; libros[35][1] = "Python instantaneo (1999) ";libros[35][2]=" Murdoc Russell";
	libros[36][0] = "Python"; libros[36][1] = "Python para ciencia e ingenieria ";libros[36][2]=" Fransheco Piari";
	libros[37][0] = "Python"; libros[37][1] = "Python para principiantes ";libros[37][2]=" Nicolae Paganini";
	libros[38][0] = "Python"; libros[38][1] = "Python para todos ";libros[38][2]=" Lex Lutor";
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Para buscar por dos o mas autores escriba el nombre de cada uno separado por una (,) coma"<<endl;
        cout<< "Ejemplo:  Juanco Scofet,Sonia Escobar "<<endl;
        cout << "Ingrese la descripcion del libro o del autor que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 39; i++)
        {
            
              string libro = libros[i][1];
              string libro1 = libros[i][2];
  
              string libroEnminuscula = libro;
              // transformamos a minuscula los string buscar y libro
              transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
              transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
                
              string libroEnminuscula1 = libro1;
              // transformamos a minuscula los string buscar y libro
              transform(libroEnminuscula1.begin(), libroEnminuscula1.end(), libroEnminuscula1.begin(), ::tolower);
              transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
              

              if (libroEnminuscula.find(buscar) &&libroEnminuscula1.find(buscar)  != string::npos) {
                
                cout << "Libro encontrado: " << libro<<" "<<libro1 << endl;
                   
                 cout << "Tambien te sugerimos estos libros: " << endl;

                 int sugerencia1 = rand() % 38 + 1;
                 int sugerencia2 = rand() % 38 + 1;
                 int sugerencia3 = rand() % 38 + 1;

                 cout << " Sugerencia 1: " << libros[sugerencia1][1]<<endl;
                 cout << " Sugerencia 2: " << libros[sugerencia2][1]<< endl;
                 cout << " Sugerencia 3: " << libros[sugerencia3][1]<< endl;
                 
                 salir = true;
                 break;
                 }
                
        
         }

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    

    return 0;
}