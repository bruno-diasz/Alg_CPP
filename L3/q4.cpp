#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(0));
    int n = (rand()%10)+1;
    int chute;
    cout<< "Digite o número que você acha que é: " << endl;
    while (chute != n)
    {
        cin >> chute;
        
        if(chute != n) cout << "Errou !!!"<< endl;
        else cout << "Acertou !!!" <<endl;
    }
    
   
    
    return 0;
}
