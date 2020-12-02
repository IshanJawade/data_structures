# include <iostream>
using namespace std;

// My logic (Breutforce Approach)
int maxNumIndex(int arr[], int arrlen){
	int maxNum=NULL, maxNumIn=0;
	for(int i=0; i < arrlen-1; i++){
		if (maxNum == NULL){
			maxNum = arr[i];
		}
		if (arr[i] > maxNum){
			maxNum = arr[i];
			maxNumIn = i;
		}
	}
	
	return maxNumIn;
}

int main(){
	int arr[] = {12, 34, 56, 78, 90, 97, 86, 64, 42, 31};
	int arrlen = *(&arr + 1) - arr; 		//formula to finding length of array
	cout << maxNumIndex(arr, arrlen) << endl; 
	return 0;
}