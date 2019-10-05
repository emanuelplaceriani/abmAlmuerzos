#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
#include "comidas.h"
#define TAM 10
#define TAMC 3
#define TAMCOM 5
#define TAMAL 5

int main()
{
    int legajo = 20000;
    int idAlmuerzo=100;
    int opcionPrincipal;
    eCarrera carreras[TAMC]={{1000,"TUP"},{1001,"TUSI"},{1002,"LIC"}};
    eAlumno lista[TAM];
    eComida comidas[TAMCOM]={{5000,"Bife", 250},{5001,"Fideos", 180},{5002,"Pizza", 200}, {5003,"Arroz", 160},{5004,"Milanesa", 220}};
    eAlmuerzo almuerzos[TAMAL]; // 5 ALMUERZOS MAX

    char salir = 'n';

    inicializarAlumnos( lista, TAM);
    inicializarAlmuerzos(almuerzos,TAMAL);

    legajo = legajo + hardcodearAlumnos(lista, TAM, 6);

    do
    {
       opcionPrincipal=menuPrincipal();
       if(opcionPrincipal==1)
        {
            switch( menu())
            {
            case 1:
                if(altaAlumno(lista, TAM, legajo, carreras, TAMC))
                {
                    legajo++;
                }
                break;

            case 2:
                bajaAlumno(lista, TAM, carreras, TAMC);
                break;

            case 3:
                ModificarAlumno(lista, TAM, carreras, TAMC);
                break;

            case 4:
                mostrarAlumnos(lista, TAM, carreras, TAMC);
                break;

            case 5:
                ordenarAlumnos(lista, TAM);
                break;

            case 6:
                mostrarInformes(lista, TAM, carreras, TAMC);
                break;

            case 7:
                mostrarCarreras(carreras, TAMC);
                break;

            case 8:
                printf("Confirma salir?:");
                fflush(stdin);
                salir = getche();
                break;
            case 9:
                mostrarComidas(comidas,TAMCOM);
                break;
            case 10:
                if(altaAlmuerzo(lista,TAM,idAlmuerzo,comidas,TAMCOM)!=-1)
                {
                    system("cls");
                    printf("Alta exitosa");
                    idAlmuerzo++;
                    system("pause");
                }
                else
                {
                    printf(" carga no concretada");
                }
            default:
                printf("\nOpcion Invalida!\n\n");
            }
            system("pause");
        }
        else if(opcionPrincipal==2)
        {
            //menu almuerzos;
        }
        else
        {
            printf("opcion invalida");
            salir='s';
        }
    }
    while(salir == 'n');

    return 0;
}



