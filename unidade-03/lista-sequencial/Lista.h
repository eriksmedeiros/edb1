#include "Aluno.h"
#include <vector>

class Lista{
private:
    int size;
    vector<Aluno> alunos;

public:
    int* createList(int tam);
    void destroyList(vector<Aluno>& list);
    
};