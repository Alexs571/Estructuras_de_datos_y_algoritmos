/******************************************************************************

Ingresar el día y la cotización del dólar durante un mes. 
Calcular y mostrar el día 
donde hubo la mayor cotización.

*******************************************************************************/

#include <stdio.h>


float cargar();

float mayor(float num1, float num2);

float mayorVecValor(float vec[], int largoVec);

int mayorVecIndice(float vec[], int largoVec);


int main()
{
    int i,dia,largoMes,mayorCotizacion;
    float  dolar[32],mayorDolar;
    
    
    printf("Cuantos dias tiene el mes\n");
   
    largoMes=cargar();
    for(i=0;i<largoMes;i++){
        dia=i+1;
        printf("cuanto vale el dolar en el dia %d \n", dia);
        dolar[i]=cargar();
        printf("%.2f \n", dolar[i]);
    }
    
    
    mayorDolar=mayorVecValor(dolar,largoMes);
    mayorCotizacion=mayorVecIndice(dolar,largoMes)+1;
    
    printf("El dia %d fue el de mayor cotizacion con un valor de %2.f", mayorCotizacion,mayorDolar);
    
    
    
    return 0;
}

float mayorVecValor(float vec[],int largoVec){
    int i;
    float mayor;
     mayor=0;
    for(i=0;i<largoVec;i++){
       
        if(vec[i]>mayor){
            mayor=vec[i];
        }
    }
    return mayor;
}

int mayorVecIndice(float vec[],int largoVec){
    int i,mayorIndice;
    float mayor;
    mayor=0;
    mayorIndice=i;
    for(i=0;i<largoVec;i++){
        
        if(vec[i]>mayor){
            mayor=vec[i];
            mayorIndice=i;
        }
        
    }
    return mayorIndice;
}

float cargar(){
    float num;
    printf("Ingrese  valor: ");
    scanf("%f", &num);
    return num;
    
}














