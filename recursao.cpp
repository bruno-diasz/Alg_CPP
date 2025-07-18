#include <iostream>
using namespace std;

int fatorial (int n) {
    if (n == 0){
        return 1;
    }
    else{
        return n * fatorial(n-1);
    }
}
int termo (int i, int j) {
   int t = fatorial(i)/(fatorial(i-j)*fatorial(j));
   return t;
}
void imprimeTriPascal (int l, int i = 0, int j = 0) {
    if (i == l) return; 
    if (j > i) {
        cout << endl;
        imprimeTriPascal(l, i + 1, 0); 
    } else {
        cout << termo(i, j) << " ";
        imprimeTriPascal(l, i, j + 1); 
    }
 }
int main () {
    int nlinhas;
    cin >> nlinhas;
    imprimeTriPascal(nlinhas);
    return 0;
 }