#include <iostream>

using namespace std;

struct Aluno{
    int matricula;
    float nota1;
    float nota2;
    float media;

void calcularMedia(){
  media = (nota1+nota2) / 2;

    }
};
Aluno lerNotas(Aluno aluno){
    cin >> aluno.nota1;
    cin >> aluno.nota2;
    return aluno;
}

//acessasndo pontos
int main(void){
    Aluno aluno;
       //aluno.matricula = 123;
       // aluno.nota1 = 9.9;
       // aluno.nota2 = 9.7;
        aluno = lerNotas(aluno);
        aluno.calcularMedia();
        printf("Media:%.2f", aluno.media);
        aluno = lerNotas(aluno);
    return 0;
}

