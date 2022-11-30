#include<bits/stdc++.h>
using namespace std;

vector<int> generateArray(int size){
    vector<int> res;
    for(int i= 0;i<size;i++){
        res.push_back(rand()%100);
    }
    return res;
}
void MergeSortedIntervals(vector<int>& v, int s, int m, int e) {
	vector<int> temp;

	int i, j;
	i = s;
	j = m + 1;

	while (i <= m && j <= e) {

		if (v[i] <= v[j]) {
			temp.push_back(v[i]);
			++i;
		}
		else {
			temp.push_back(v[j]);
			++j;
		}

	}

	while (i <= m) {
		temp.push_back(v[i]);
		++i;
	}

	while (j <= e) {
		temp.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = temp[i - s];

}

// the MergeSort function
// Sorts the array in the range [s to e] in v using
// merge sort algorithm
void MergeSort(vector<int>& v, int s, int e) {
	if (s < e) {
		int m = s+ (e -s ) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		MergeSortedIntervals(v, s, m, e);
	}
}

int main(){
int t=5; // number of test cases to produce

cout<<"Test Case Solution using Merge Sort"<<endl;
for(int i=0;i<t;i++){
    int size = rand()%11;
    vector<int> arr = generateArray(size);
    MergeSort(arr, 0, size-1);
    cout<< "Output"<<i+1<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

return 0;
}