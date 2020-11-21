# include <iostream>
using namespace std;

class arrayOps{
	public:
		int search(int arr[], int arrlen, int num ){
			for (int i = 0; i <= arrlen; i++){
				if ( arr[i] == num){
					return i;
				}
				else
				{
					cout<<"Number not found";
				}
				
			}
		}	
};

int main(){
	arrayOps obj;
	int arr[]={12, 34, 56, 78, 90, 97, 86, 64, 42, 31};
	cout <<  arr <<endl;
	cout << &arr[0] << endl;
	cout << arr[2] << endl;
	cout << *(arr + 2) << endl;
	int arrlen = *(&arr + 1) - arr; 		//formula to finding length of array
	cout << arrlen;
	int num;
	cout << "Enter the number to search from the array:";
	cin >> num;
	obj.search(arr, arrlen, num);
	return 0;
}