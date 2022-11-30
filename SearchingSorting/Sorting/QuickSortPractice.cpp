#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &v, int start, int end){
    int pivot = end;
    int j= start-1;
    for(int i = start;i<=end-1;++i){
        if(v[i]<v[pivot]){
             j++;
            swap(v[i],v[j]);
           
        }
    }
    swap(v[j+1],v[pivot]);
    return j+1;
}
void QuickSort(vector<int>& arr, int start, int end){
    if(start<end){
        int p = partition(arr, start, end);
        QuickSort(arr, start, p-1);
        QuickSort(arr, p+1, end);
    }
}
int main(){
 vector<int> input = {2,1,5,3,6,4,9,7,2,8,10,11,3};
 QuickSort(input, 0, input.size()-1);
 for(int i=0;i<input.size();i++){
    cout<<input[i]<<" ";
 }

return 0;
}