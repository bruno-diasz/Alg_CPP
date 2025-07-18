#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ios;

const int MAXNOME = 100;
const int MAXCANDIDATO = 20;

struct Candidato {
    char nome[MAXNOME];
    int numero;
    int votos;
};

int main() {
    Candidato cand[MAXCANDIDATO];
    char arquivoEntrada[] = "candidatos.txt";
    char arquivoSaida[] = "votos.txt";

    // Simula leCandidatos()
    ifstream entrada(arquivoEntrada);
    if (!entrada.is_open()) {
        cout << "Erro ao abrir arquivo " << arquivoEntrada << endl;
        exit(0);
    }

    int numCandidatos = 0;
    while (entrada >> cand[numCandidatos].numero) {
        entrada.getline(cand[numCandidatos].nome, MAXNOME);
        cand[numCandidatos].votos = 0;
        numCandidatos++;
    }
    entrada.close();

    //Votação

    bool votacao = true;
    while (votacao) {
        cout << "Digite o numero do candidato: ";
        int voto;
        cin >> voto; 
        for (int i =0; i<numCandidatos;i++){
            if(cand[i].numero == voto){
                cand[i].votos++;
                cout << cand[i].nome<< ": "<< cand[i].votos << " votos"<<endl;
            }
        }

        cout <<endl<< "Você deseja continuar a votação? (s/n): " <<endl;
        char x;
        cin >> x ;
        if (x == 'n'){
            votacao = false;
        }else if (x == 's'){
            continue;
        }else{
            cout << "Opção invalida!"<<endl;
        }

    }
    


    // Cálculo do vencedor
    int vencedor = 0;
    for (int i = 1; i < numCandidatos; i++) {
        if (cand[i].votos > cand[vencedor].votos) {
            vencedor = i;
        }
    }

    cout << endl << "O candidato vencedor foi " << cand[vencedor].nome << endl;
}