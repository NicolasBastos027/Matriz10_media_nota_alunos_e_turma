#include <iostream>
using namespace std;

int main() {
    const int num_alunos = 3;
    const int num_notas = 3; 
    const int num_turmas = 2;

    float M[num_turmas][num_alunos][num_notas];
    float TURMA[num_turmas] = {0};

    for (int t = 0; t < 2; t++) {
        cout << "Turma " << t + 1 << "," ;
        for (int a = 0; a < num_alunos; a++) {
            cout << "Aluno " << a + 1 << ":" << endl;
            cout << "Informe a primeira nota: ";
            cin >> M[t][a][0];
            cout << "Informe a segunda nota: ";
            cin >> M[t][a][1];
            M[t][a][2] = (M[t][a][0] + M[t][a][1]) / 2;
            TURMA[t] += M[t][a][2]; 
        }
        TURMA[t] /= num_alunos; 
    }

    int turma_maior_media = (TURMA[0] > TURMA[1]) ? 0 : 1;
    cout << "\nA Turma " << turma_maior_media + 1 << " tem a maior média: " << TURMA[turma_maior_media] << endl;

    for (int t = 0; t < num_turmas; t++) {
        cout << "\nTurma " << t + 1 << ":" << endl;
        for (int a = 0; a < num_alunos; a++) {
            if (M[t][a][2] > TURMA[t]) {
                cout << "Aluno " << a + 1 << " teve média maior que a média da turma: " << M[t][a][2] << endl;
            }
        }
    }

    return 0;
}
