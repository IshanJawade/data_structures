# include <iostream>
using namespace std;

void doubleIt(int nums[]);

int main(){

    int array[] = {0,1,2,3,4,5,6,7,8,9};
    doubleIt(array);

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout<<"\n";
    
    return 0;
}

void doubleIt(int nums[]){

    for(int i=0; i<10; i++){
        nums[i] = nums[i] * 2;
    }

}