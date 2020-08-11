# include <iostream>
using namespace std;

int main(){
    int size, *que;
    cout<<"Enter the number of values: ";
    cin>>size;
    cout<<"Enter the values in array: "<<endl;
    que = new int[size];
    for(int i=0; i<size; i++){
        cin>>que[i];
    }
    cout<<"Values in array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<que[i]<<" ,";
    }
    cout<<endl;
    return 0;
}