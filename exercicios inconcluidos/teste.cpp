#include <iostream>

int * increase_capacity(int * data, int &capacity, int size){
    int * new_array =  new int [capacity+10];
    for (int i = 0; i<capacity ; i++){
        new_array [i] = data[i];
    }


}
int * push_back(int *data, int &capacity, int &size, int value){
    if (size==capacity){
        data = increase_capacity(data, capacity, size);
        data[size++]=value;
    }
    return data;
}

int main(){
    int *data, size=0, capacity=10,x;
    data = new int[capacity];
    while (std::cin >> x, x!=-1){
        data = push_back(data, capacity, size, x);
    }
/* ... */
    delete [] data;
    return 0;
}