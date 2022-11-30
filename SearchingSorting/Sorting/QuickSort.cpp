#include<bits/stdc++.h>
using namespace std;

// This function is used to generate the random array
vector<int> generateArray(int size){
    vector<int> res; // result array
    // iterate from i=0 to size of array
    for(int i= 0;i<size;i++){
        // insert the randomly genrated number in array vector
        res.push_back(rand()%100); // rand() it generates the random number 
    }
    return res;
}
// Partition function to return next pivot index
int partition (vector<int> &v, int start, int end){
   int pivot = end;
	int j = start;
	for(int i=start;i<end;++i){
        // if the current element is less than our pivot then we swap i and jth element
		if(v[i]<v[pivot]){
			swap(v[i],v[j]);
			++j;
		}
	}
	swap(v[j],v[pivot]);
	return j;
}
// this function sort the given array
void Quicksort(vector<int> &v, int start, int end ){

	if(start<end){
		int p = partition(v,start,end);
		Quicksort(v,start,p-1);
		Quicksort(v,p+1,end);
	}
	
}
int main(){

int t=5; // number of test cases to produce
for(int i=0;i<t;i++){
    int size = rand()%11;// it generate the radom size of array in the range 0 to 10
    vector<int> arr = generateArray(size); // here we generate array and store it in arr
    Quicksort(arr, 0, size); 
    cout<< "Output"<<i+1<<endl;
    // now print the sorted array
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
return 0;
}