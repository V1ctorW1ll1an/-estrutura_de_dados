#include <iostream>
#include <string.h>

using namespace std;

class Linguagem{
    protected:
     char email[100];
    public:
     char nome[100];

     char * getEmail(){
         return this->email;
     }

     void setEmail(char email[]){
         strcpy(this->email, email);
     }
};

int main(int argc, char const *argv[]) {
    Linguagem linguagem;

    char email[] = "vv@gmail.com";
    linguagem.setEmail(email);
    strcpy(linguagem.nome, "Victor");

    cout << "Nome: " << linguagem.nome << endl;
    cout << "Email: " << linguagem.getEmail() << endl;

    return 0;
}
