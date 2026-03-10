# include <iostream>
using namespace std;

void  printValues(int intVal, int arr[]);

int main(int argc, char *argsv[]){

    int array[] = {1,2,3,4};
    int array2[10] = {1,2,3,4};
    int myArray[10][10];

    cout<< "Array1: ";
    printValues(4, array);

    cout<< "Array2: ";
    printValues(10, array2);

    return 0;
}

void printValues(int intVal, int arr[]){

    for(int i=0; i<intVal; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}
