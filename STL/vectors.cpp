# include <iostream>
# include <vector>		//library for using vector 

using namespace std;

int main(){
	vector<int> v1 = {10, 56, 45, 98, 90};  //declaring vector of int type
	cout<<v1[0]<<" "<<v1[3]<<endl;			// accessing nth element of a vector 

	int size = v1.size(); 			// size of a vector 
	cout<<"Size of a vector: "<<size<<endl;
	
	// Adding eleemts to the vector
	v1.push_back(67);
	v1.push_back(98);
	v1.push_back(96);
	v1.push_back(64);
	v1.push_back(34);
	v1.push_back(340);

	size = v1.size();
	cout<<"Size of a vector after adding elements: "<<size<<endl;

	for(int i = 0; i < size; i++){
		cout<<v1[i]<<", ";
	}

	cout<<endl;
	
	// Upper Bound and Lower bound in array 
	vector<int> :: iterator it = lower_bound(v1.begin(), v1.end(), 100);    // "it" is pointer
	// vector<int> :: iterator it2 = upper_bound(v1.begin(), v1.end(), 100);	// "it2" is pointer

	cout<<*it<<" "; //<<*it2;

	cout<<endl;
	return 0;
}