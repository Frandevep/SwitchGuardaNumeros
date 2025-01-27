#include <stdio.h>
#include <stdlib.h>

struct datos {

    int numero;
};

int main() {

    struct datos d[3]; // arreglo de estructuras para almacenar 3 numeros
    int opcion;
    int numerosCargados = 0; // bandera para verificar si los numeros han sido cargados

    do {
        // mostrar el menu
        printf("----- Menu -----\n");
        printf("1.Cargar numeros\n");
        printf("2.Mostrar numeros\n");
        printf("3.Salir\n");
        printf("Elige una opcion:");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // cargar los numeros
                for (int i=0;i<3;i++) {
                    printf("Ingrese el numero %d:",i+1);
                    scanf("%d", &d[i].numero);
                }
                numerosCargados = 1; // marcar que los numeros han sido cargados
                printf("Numeros cargados correctamente.\n");
                break;

            case 2:
                // mostrar los numeros cargados
                if (numerosCargados) {
                    printf("\nNumeros cargados:\n");
                    for (int i=0;i<3;i++) {
                        printf("%d\n",d[i].numero);
                    }
                } else {
                    printf("Primero debes cargar los numeros.\n");
                }
                break;

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intenta de nuevo.\n");
        }
    } while (opcion!= 3);

    return 0;
}
