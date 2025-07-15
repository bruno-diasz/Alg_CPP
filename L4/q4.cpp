#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string str= "A string";
    char *ptr;
    ptr = &str[0];
    cout << *(ptr) << ' ' <<  str[0] << ' ' <<str[3] <<endl;
    cout << *(ptr+2) << ' ' << *(ptr+4) << ' '<< *(ptr+7)<< endl;
    return 0;
}
