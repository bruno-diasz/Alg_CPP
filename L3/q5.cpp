//Q A. A complexidade é O(1) pois o tempo não aumenta com a quatidade de entradas
//Q B. Como o codigo tem complexidade O(1) sendo o mais rapido possivel não encointrei pontos de melhorias

#include <iostream>
#include <ctime>
using namespace std;


clock_t startTimer;
time_t beginTimer;

void tic()
{
 beginTimer = time(&beginTimer);
 struct tm * timeinfo;
 timeinfo = localtime(&beginTimer);
 std::cout << "simulation start at: " << asctime(timeinfo) << std::endl;
}

double toc()
{
 time_t finishTimer = time(&finishTimer);
 double simTime = difftime(finishTimer, beginTimer) / 60.0;
 struct tm * timeinfo;
 timeinfo = localtime(&finishTimer);
 std::cout << "simulation finished at: " << asctime(timeinfo) << std::endl;
 std::cout << "Time elapsed: " << simTime << " minutes" << std::endl;
 return simTime;
}

int main() {
    tic();

    float velocidade, tempo, distancia;

    cout << "Digite a velocidade em km: ";
    cin >> velocidade;

    cout << "Digite o tempo em horas: ";
    cin >> tempo;

    distancia = velocidade * tempo;

    cout << "Distância percorrida: " << distancia << " km" << endl;

    toc();
}
