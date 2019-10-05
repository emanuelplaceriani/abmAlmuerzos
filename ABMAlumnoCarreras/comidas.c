#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
#include "comidas.h"

void mostrarAlumnoSinCarreras(eAlumno* x, int tam)
{
    for(int i=0;i<tam;i++)
    {
        if(x[i].isEmpty==0)
        {
         printf(" %d: %d  %10s\n",i+1,x[i].legajo,x[i].nombre);
        }
    }
}

void inicializarAlmuerzos(eAlmuerzo vec[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        vec[i].estado = 0;
    }
}

void mostrarComida(eComida comida){

    printf("  %d      %10s\n", comida.id, comida.descripcion);

}

void mostrarComidas(eComida* comida, int tam)
{
    printf(" Id   Descripcion\n\n");
    for(int i=0; i < tam; i++){
        mostrarComida(comida[i]);
    }
    printf("\n");
}
int altaAlmuerzo(eAlumno* alumno, int tam,int idAlmuerzo ,eComida* comidas, int tamCom)
{
    int retorno;
    int estaAlumno=0;
    int estaComida=0;
    int idAlumno;
    int idComida;
    int intentosAl = 2;
    int intentosCom = 2;

        do{
            system("cls");
            printf("Lista de alumnos\n");
            mostrarAlumnoSinCarreras(alumno,tam);
            printf("\nLista de Comidas\n");
            mostrarComidas(comidas,tamCom);

            printf("Ingrese el id del alumno ");
            scanf("%d",&idAlumno);
            if(buscarAlumno(idAlumno,alumno,tam)==-1)
            {
                system("cls");
                printf("ERROR - ALUMNO INEXISTENTE");
                system("pause");
                intentosAl--;
            }
            else
            {
                printf("\n\nAlumno encontrado\n");
                estaAlumno=1;
                break;
            }
         }while(intentosAl>0);
    if(!(intentosAl==0))
    {
        do
         {
            printf("Ingrese el id de la comida ");
            scanf("%d",&idComida);
            if(buscarComidaPorId(comidas,tamCom,idComida)==0)
            {
                printf("\n\nComida encontrada");
                estaComida=1;
                break;
            }
            else
            {
                system("cls");
                printf("ERROR - Comida no encontrada");
                system("pause");
                intentosCom--;
            }
         }while(intentosCom>0);
    }
    else
    {
        retorno=-1;
    }
    if(estaAlumno && estaComida)
    {

    }

    return retorno;
}

int buscarComidaPorId(eComida* c,int tamC,int id)
{
    int retorno=-1;

    for(int i =0;i<tamC;i++)
    {
        if(id==c[i].id)
        {
            retorno=0;
            break;
        }
        else
        {
            retorno=-1;
        }
    }

    return retorno;
}

eAlmuerzo nuevoAlmuerzo (int idAlumno,int idComida,int idAlmuerzo)
{
    eAlmuerzo almuerzo;

    almuerzo.idAlumno=idAlumno;
    almuerzo.idComida=idComida;
    almuerzo.idAlmuerzo=idAlmuerzo;

}
/*void menuAlmuerzo
{
    int opcion;

    system("cls");
    printf("****** ABM Almuerzos*******\n\n");
    printf("1-Alta almuerzo\n");
    printf("2-Baja almuerzo\n");
    printf("3-Modificar alumno\n");
    printf("4-Listar alumnos\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}*/


