#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nomealuno[40], curso[40];
    int idade, cr, matricula;
};


struct alunomat {
    int nota, faltas;
    struct aluno fulano;
};


struct disciplina {
    int codigo;
    char nome[40];
    struct alunomat turma[40];
};

void main () {
    
}