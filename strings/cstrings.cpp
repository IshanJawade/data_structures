#include <iostream>
using namespace std;

int main(){
    // both are valid
    char str[] = "Ishan";
    string strs = "Jawade";

    // null character is '\0' which can be replaced by simple 0
    char testStr[] = {'s','t','t','s','g','\0','h','d','g','r'}; 

    cout<<"Size of char array: " << (sizeof(str) / sizeof(char)) << "\n" ;
    cout<<"Size of char array2: " << (sizeof(strs) / sizeof(char)) << "\n" ;

    for(int i=0; i<sizeof(testStr); i++){
        cout<<testStr[i];
    }
    cout<<"\n";

    cout<<testStr<<"\n";
    return 0;
}

