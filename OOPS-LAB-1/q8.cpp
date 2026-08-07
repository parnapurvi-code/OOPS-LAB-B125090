#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int N;
    int* arr;
    cout << "enter a positive integer:";
    cin >> N;
    int *ptr = (int*)malloc(N*sizeof(int));
    cout << "Enter elements" << endl;
    for (int i = 0; i<N; i++){
        cin >> *(ptr + i);
    }
    cout << "stored elements: "<< endl;
    for (int i = 0; i<N; i++){
        cout << *(ptr + i) << endl;
    }
    free(ptr);
    return 0;

}