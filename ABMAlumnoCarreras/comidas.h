
// eComida comidas[TAMCOM]= {{5000,"Bife", 250},{5001,"Fideos", 180},{5002,"Pizza", 200}, {5003,"Arroz", 160},{5004,"Milanesa", 220}};
// 1) crear y hardcodear struct "comida".
// 2) mostrar una comida.
// 3) mostrar todas las comidas.
// 4) crear struct almuerzos
// 5) opcion de cargar almuerzo (se pide legajo de alumno y id de comida)

typedef struct
{
    int id;
    char* descripcion;
    float precio;

}eComida;

typedef struct
{
    int idComida;
    int idAlumno;
    int idAlmuerzo;
    eFecha fechaAlmuerzo;
    int estado;
}eAlmuerzo;

// FUNCIONES ALMUERZOS
void inicializarAlmuerzos(eAlmuerzo vec[], int tam);
int altaAlmuerzo(eAlumno* alumno, int tam,int idAlmuerzo ,eComida* comidas, int tamCom);

//FUNCIONES COMIDAS :P
void mostrarComidas(eComida* comida, int tam);
void mostrarComida(eComida comida);
int buscarComidaPorId(eComida* c,int tamC,int id);


// OTRAS
void mostrarAlumnoSinCarreras(eAlumno* x, int tam);

