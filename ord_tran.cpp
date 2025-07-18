#include <iostream>
#include <ctime>
#include <random>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n -1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n = 10;
    int arr [n]; 
    srand(time(0));
    for(int i = 0; i < n ; i++){
        arr[i] = rand() % 1000;
        cout << arr[i] << " ";
    }

    bubbleSort(arr, n);
    cout << "\n";

    for(int j = 0; j < n ; j++){
        cout << arr[j] << " ";
    }

    return 0;
}
