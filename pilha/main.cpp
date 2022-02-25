#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

void imprime_vetor(int vetor[TAM]){
    int i;
    for (i = 0; i < TAM; i++){
        std::cout << vetor[i] << " ";
    }
}

void push(int valor, int pilha[TAM], int *topo){
      // caso nao possa colocar mais valores
    if (*topo == TAM - 1){
        std::cout << "pilha cheia!" << std::endl << std::endl;
    }
    else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }

}

int main(){
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1; // topo da lista

    std::cout << "Pilha vazia!" << std::endl;
    imprime_vetor(pilha);
    std::cout << "\n\n";

    std::cout << "Incrementando \n";

    for (int i = 0; i < TAM+1; i++)
    {
        push(i, pilha, &topo);
        imprime_vetor(pilha);
        std::cout << std::endl;
    }

    // push(5, pilha, &topo);
    // push(7, pilha, &topo);
    // push(10, pilha, &topo);
    // push(3, pilha, &topo);
    // push(9, pilha, &topo);
    // push(12, pilha, &topo);
    // push(101, pilha, &topo);
    // push(90, pilha, &topo);
    // push(87, pilha, &topo);
    // push(15, pilha, &topo);
    // push(10000, pilha, &topo); // pilha cheia

      std::cout << std::endl  << std::endl << "Pilha completa!" << std::endl;
    imprime_vetor(pilha);
    std::cout << std::endl;
}