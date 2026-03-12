# include <iostream>
using namespace std;

int main(){

    int *group = new int[10]{0,1,2,3,4,5,6,7,8,9};

    // these all work for arrays
    for(int i=0; i<10; i++){
        cout << *(group+i) << " ";
    }
    cout<<"\n";

    for(int i=0; i<10; i++){
        cout << i[group] << " ";
    }
    cout<<"\n";
    
    for(int i=0; i<10; i++){
        cout << group[i] << " ";
    }
    cout<<"\n";

    return 0;
}