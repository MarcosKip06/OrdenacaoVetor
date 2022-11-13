#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

bool ExisteNumero(int valores[],int tam, int valor){
    for(int i = 0;i<tam;i++){
        if(valores[i]==valor)
            return true;
    }
    return false;
}

void GeraNumeros(int numeros[],int quantNumeros,int Limite){
    srand(time(NULL));

    int v;
    for(int i=0;i<quantNumeros;i++){
        v = rand() % Limite;
        while(ExisteNumero(numeros,i,v)){
            v = rand() % Limite;
        }
        numeros[i] = v;
    }

}

int main(){
    int numeros[100];
   
    GeraNumeros(numeros,100,1000);
    for(int i = 0;i<100;i++){
      // cout<<numeros[i]<<" - ";
        
    }
    int i, aux, contador;
    
    printf("Ordem atual dos itens no array:\n");
    for (i = 0; i < 100; i++) {
    printf("%4d", numeros[i]);
    
    // Algoritmo de ordenação Bubblesort:
    for (contador = 1; contador < 100; contador++) {
    for (i = 0; i < 100 - 1; i++) {
        if (numeros[i] > numeros[i + 1]) {
            aux = numeros[i];
            numeros[i] = numeros[i + 1];
            numeros[i + 1] = aux;
     }
   }
 }
    printf("\n----------------------------------------------\n");
    printf("\nElementos do array em ordem Bubblesort:\n");
        for (i = 0; i < 100; i++) {
            printf("%4d", numeros[i]);
    }
}   
    // Algoritmo de ordenação Selectionsort:
    for(int i = 0; i < 100 - 1; i++) {
        int menor = i;
        for(int j = i + 1; j < 100; j++) {
            if (numeros[j] < numeros[menor]) menor = j;
      }
        int aux = numeros[i];
        numeros[i] = numeros[menor];
        numeros[menor] = aux;
   }

    printf("\n----------------------------------------------\n");
    printf("\nElementos do array em ordem Selectionsort:\n");
            for (i = 0; i < 100; i++) {
                printf("%4d", numeros[i]);
    }
    
     // Algoritmo de ordenação Inserctionsort:
     int j, tmp;
    for(i=1 ; i<= 100-1; i++) {
        j = i;
 
        while(j>0 && numeros[j-1]>numeros[j]) {
            
            tmp = numeros[j];
            numeros[j] = numeros[j-1];
            numeros[j-1] = tmp;
 
            j--;
    }
  }
  printf("\n----------------------------------------------\n");
  printf("\nElementos do array em ordem Inserctionsort:\n");
 
    for(i=0; i<100; i++){
        printf("%4d", numeros[i]);
    }
        
  
    return 0;
}
    
    
    

