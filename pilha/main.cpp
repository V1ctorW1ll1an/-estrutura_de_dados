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

void pop(int pilha[TAM], int *topo){
    if(*topo == -1){
        std::cout << "A pilha já está vazia";
    }
    else{
        std::cout << "Valor removido: " << pilha[*topo] << std::endl;
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

int main(){
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1, valorRetirado; // topo da lista

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


    std::cout << std::endl  << std::endl << "Pilha completa!" << std::endl;
    imprime_vetor(pilha);
    std::cout << std::endl;

    pop(pilha, &topo);
    imprime_vetor(pilha);
    std::cout << std::endl;
}