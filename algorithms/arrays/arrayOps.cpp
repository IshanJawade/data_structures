# include <iostream>
using namespace std;

class arrayOps{
	public:
		// To search element in Array
		int search(int arr[], int arrlen, int num ){		
			string err = "Number not found!";
			for (int i = 0; i <= arrlen; i++){
				if ( arr[i] == num){
					return i;
				}			
			}
			return -1;
		}
		//To insert the elememnt in the array
		int insert(int arr[], int arrlen, int pos, int ele, int cap){ 		
			if (arrlen == cap){
				cout<<"Array is full";
				return arrlen;
			}
			int idx = pos-1;
			for(int i=arrlen-1; i>=idx; i-- ){
				arr[i-1]=arr[i];
			}
			arr[idx]=ele;
			return arrlen+1;
		}

};

int main(){
	arrayOps obj;
	int arr[]={12, 34, 56, 78, 90, 97, 86, 64, 42, 31};

	//access first element in the array
	cout <<  arr <<endl;
	cout << &arr[0] << endl;

	//access 'nth' element in array 
	cout << arr[2] << endl;
	cout << *(arr + 2) << endl;

	int arrlen = *(&arr + 1) - arr; 		//formula to finding length of array
	cout << arrlen << endl;

	int num;
	cout << "Enter the number to search from the array:";
	cin >> num;
	cout << obj.search(arr, arrlen, num) << endl;
	return 0;
}