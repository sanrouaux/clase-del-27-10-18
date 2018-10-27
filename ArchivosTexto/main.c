#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char cadena[30] = "Santiago";

    FILE* pArchivo; //Crea un puntero a file
    pArchivo = fopen("saludo.txt", "w"); //Busca el archivo. Si no lo encuentra, lo cre. Le pasamos el modo
    fprintf(pArchivo, "Hola %s, como estas?\nTodo bien", cadena); //Escribe o sobreescribe el archivo
    fclose(pArchivo); // Cierra el archivo. Es importante cerrarlo porque ninguna otra aplicacion podria acceder l rchivo mientras este en uso



    FILE* pArchivo; //Declaro puntero a archivo
    pArchivo = fopen("saludo.txt", "r"); //Asigno una direccion de memoria del disco rigido
    char lineaUno[50]; //Variable auxiliar para guardar el texto que leera
    char lineaDos[50];

    fgets(lineaUno, 50, pArchivo); // Lee una linea del archivo, a traves del puntero y lo asigna a la variable declarada en RAM. Permite precisar el numero de caracteres a leer
    fgets(lineaDos, 50, pArchivo);

    fclose(pArchivo); // Cierra el archivo. Siempre hay que cerrar el archivo antes de abrirlo en otro modo

    puts(lineaUno); // Imprime el texto en consola
    puts(lineaDos);
    */


    FILE* pArchivo;
    pArchivo = fopen("saludo.txt", "w");
    fprintf(pArchivo, "Hola\nque\nhace");
    fclose(pArchivo);

    char texto[3][50];
    int i = 0;

    pArchivo = fopen("saludo.txt", "r");

    while(!feof(pArchivo))
    {
        fgets(texto[i], 50, pArchivo);
        i++;
    }
    fclose(pArchivo);

    for(i=0; i < 3; i++)
    {
        puts(texto[i]);
    }

    return 0;
}
