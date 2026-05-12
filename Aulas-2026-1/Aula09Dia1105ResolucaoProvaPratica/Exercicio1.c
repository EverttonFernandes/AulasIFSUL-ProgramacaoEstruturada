#include<stdio.h>

void transformarNegativoEmPositivo(float *numeroNegativo);

int main(){
    float numeroNegativo = -5;
    
    transformarNegativoEmPositivo(&numeroNegativo);
    
    printf("Numero positivo: %.1f\n", numeroNegativo);
}


void transformarNegativoEmPositivo(float *numeroNegativo){
    
    if(*numeroNegativo < 0.0f){
        *numeroNegativo = *numeroNegativo * -1.0f;
    }
}

