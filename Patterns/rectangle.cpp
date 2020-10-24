// Rectangle pattern using for loop
# include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=5; i++){       // Rows
        for (int j=1; j<=5; j++){   // Columns
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*Output:

*****
*****
*****
*****
*****

*/