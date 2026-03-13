# include <iostream>
using namespace std;

void addItem(int, int &capacity,  int &items, int *&nums);

int main(){

    int capacity = 10;
    int *nums = new int[capacity]{0,1,2,3,4};
    int items = 5;

    for(int i=0; i<300; i++){
        addItem(i*2+7, capacity, items, nums);
    }
    for(int i=0; i<100; i++){
        cout<< nums[i] << " ";
    }
    cout<<"\n";
    cout<< "Capacity: " << capacity << " Number of Items: " << items <<"\n";

    return 0;
}

void addItem(int newItem, int &capacity,  int &items, int *&nums){

    // make new array if default is full with x2 capacity
    if(items == capacity){
        capacity = capacity * 2;
        int *temp = new int[capacity];

        for(int i=0; i<items; i++){
            temp[i] = nums[i];
        }
        delete [] nums;
        nums = temp;
    }
    nums[items] = newItem; 
    items ++;
}