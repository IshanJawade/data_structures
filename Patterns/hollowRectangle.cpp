// Hollow Rectangle pattern using for loop
# include <iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row>>col;
    for (int i = 1; i <= row; i++){       //Rows (i)
        for (int j = 1; i <= col; j++){   //Colums (j)
            if ( i==1 || i==row || j==1 || j==col ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}