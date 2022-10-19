#include<bits/stdc++.h>
using namespace std;

vector<int> generateArray(int size){
    vector<int> res;
    for(int i= 0;i<size;i++){
        res.push_back(rand()%100);
    }
    return res;
}
// Merge Sort Start
void merge(vector<int> &Arr, int start, int mid, int end) {
	// create a temp array
	int temp[end - start + 1];

	// crawlers for both intervals and for temp
	int i = start, j = mid+1, k = 0;

	// traverse both arrays and in each iteration add smaller of both elements in temp 
	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}

	// add elements left in the first interval 
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	// add elements left in the second interval 
	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	// copy temp to original interval
	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}
}

// Arr is an array of integer type
// start and end are the starting and ending index of current interval of Arr

void mergeSort(vector<int> &Arr, int start, int end) {

	if(start < end) {
		int mid = (start + end) / 2;
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid+1, end);
		merge(Arr, start, mid, end);
	}
}

//Merge Sort End

//Quick Sort Start
int Partition(vector<int> &v, int start, int end){
	
	int pivot = end-1;
	int j = start;
	for(int i=start;i<end;++i){
		if(v[i]<v[pivot]){
			swap(v[i],v[j]);
			++j;
		}
	}
	swap(v[j],v[pivot]);
	return j;
	
}

void Quicksort(vector<int> &v, int start, int end ){

	if(start<end){
		int p = Partition(v,start,end);
		Quicksort(v,start,p-1);
		Quicksort(v,p+1,end);
	}
	
}
//Quick Sort End
int main(){
int t=5; // number of test cases to produce

cout<<"Test Case Solution using Merge Sort"<<endl;
for(int i=0;i<t;i++){
    int size = rand()%11;
    vector<int> arr = generateArray(size);
    mergeSort(arr, 0, size);
    cout<< "Output"<<i+1<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
cout<<"Test Case Solution using Quick Sort"<<endl;
for(int i=0;i<t;i++){
    int size = rand()%11;
    vector<int> arr = generateArray(size);
    Quicksort(arr, 0, size);
    cout<< "Output"<<i+1<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
return 0;
}