/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void diagonal_principal(int matriz[3][3], int fila, int columna);

void diagonal_secundaria(int matriz[3][3],int tamaño);

int main()
{
    int matriz[3][3];
    int fila,column,cont;
    
    //cargar matriz---
    for(fila=0;fila<3;fila++){
        for(column=0;column<3;column++){
            matriz[fila][column]=cont+1;
            cont++;
        }
    }
   //imprimir matriz ---
    
    for(fila=0;fila<3;fila++){
        for(column=0;column<3;column++){
            printf("%d\t",matriz[fila][column]);
        }
        printf("\n");
    }
    
    printf("*******diagonal primaria**********\n");
    diagonal_principal(matriz,fila,column);
    printf("\n");
    
    
    printf("*******diagonal secundaria**********\n");
    diagonal_secundaria(matriz,3);
    return 0;
}


void diagonal_principal(int matriz[3][3], int fila, int column){
    for(fila=0;fila<3;fila++){
        for(column=0;column<3;column++){
            if(fila==column){
                printf("%d",matriz[fila][column]);
            }
        }
    }
}


void diagonal_secundaria(int matriz[3][3],int tamaño){
    int i;
    for(i=0;i<tamaño;i++){
        printf("%d",matriz[i][tamaño-1-i]);
    }
}













