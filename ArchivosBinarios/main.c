#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    char letra;
}eDato;


int main()
{
    /*
    // Escritura de archivos binarios
    FILE* pArchivo;
    int x = 4;
    int y;
    int z;

    pArchivo =fopen("archivo.bin", "wb");
    y = fwrite(&x, sizeof(int), 1, pArchivo);
    fclose(pArchivo);

    printf("Guardo %d datos", y);


    //Lectura de archivos binarios
    pArchivo = fopen("archivo.bin","rb");
    z = fread(&x, sizeof(int), 1, pArchivo);
    fclose(pArchivo);

    printf("\nCargo desde el archivo el valor %d", x);
    */


    //Escritura y lectura de estructuras de datos
    int x;
    int y;

    eDato miDato;
    miDato.numero = 6;
    miDato.letra='r';

    FILE* pArchivo;
    pArchivo = fopen("archivo.bin", "wb");
    x = fwrite(&(miDato), sizeof(eDato), 1, pArchivo);
    fclose(pArchivo);


    eDato auxDato;

    pArchivo = fopen("archivo.bin","rb");
    y = fread(&auxDato, sizeof(eDato), 1, pArchivo);
    fclose(pArchivo);

    printf("%d - %c", auxDato.numero, auxDato.letra);

    return 0;
}
