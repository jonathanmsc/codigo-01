#include <iostream>
using namespace std;

int main() {
    int alunos;
    cin >> alunos;
    int* matriculas = new int[alunos];
    for (int i = 0; i < alunos; ++i) {
        cin >> matriculas[i];
    }
    int contagem = 0;
    for (int i = 0; i < alunos; ++i) {
        bool presentes = true;
        for (int n = 0; n < i; ++n) {
            if (matriculas[i] == matriculas[n]) {
                presentes = false;
            }
        }
        if (presentes) {
            contagem++;
        }
    }
    cout << contagem << endl;
    delete[] matriculas;
    return 0;
}