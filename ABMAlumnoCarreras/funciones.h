typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    int edad;
    char sexo;
    int nota1;
    int nota2;
    float promedio;
    eFecha fechaIngreso;
    int idCarrera;
    int isEmpty;
} eAlumno;

typedef struct{

    int id;
    char descripcion[20];

}eCarrera;

void mostrarAlumno(eAlumno x, eCarrera carreras[], int tam);
void mostrarAlumnos(eAlumno vec[], int tam, eCarrera carreras[], int tamC);
void ordenarAlumnos(eAlumno vec[], int tam);
void inicializarAlumnos(eAlumno vec[], int tam);
int buscarLibre(eAlumno vec[], int tam);
int buscarAlumno(int legajo, eAlumno vec[], int tam);
int altaAlumno(eAlumno vec[], int tam, int leg, eCarrera carreras[], int tamC);
eAlumno newAlumno(int leg,char nombre[],int edad, char sexo, int nota1, int nota2, eFecha f, int idCarrera);
int bajaAlumno(eAlumno vec[], int tam, eCarrera carreras[], int tamC);
int ModificarAlumno(eAlumno vec[], int tam, eCarrera carreras[], int tamC);
int hardcodearAlumnos( eAlumno vec[], int tam, int cantidad);

// Funciones Carrera
void mostrarCarreras(eCarrera carreras[], int tam);
void mostrarCarrera(eCarrera carrera);
int cargarDescCarrera(int id, eCarrera carreras[], int tam, char desc[]);
int menuInformes();
int menu();
void mostrarInformes(eAlumno alumnos[], int tam, eCarrera carreras[], int tamC);
void mostrarAlDeUnaCarrera(eAlumno* alumnos, int tam, eCarrera* carreras, int tamC,int idCarrera);
void mostrarAlumnosPorCarrera(eAlumno* a,int tam,eCarrera* c,int tamC);
void mostrarCantDeAlPorCarrera(eAlumno* a,int tam,eCarrera* c,int tamC);
void mostrarCarreraConMasAlumnos(eAlumno* a,int tam,eCarrera* c,int tamC);

//otras
int menuPrincipal(void);

