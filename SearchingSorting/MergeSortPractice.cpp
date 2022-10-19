#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int start, int mid, int end){
    vector<int> temp;
    int i= start;
    int j= mid+1;
    while(i<=mid&& j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    } 
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i= start ;i<=end;i++){
        arr[i] = temp[i-start];
    }
}
void mergeSort(vector<int>& arr, int start, int end){
    if(start<end){
        int mid = start + (end- start)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}
int main(){
    vector<int> input =  {4,1,5,3,2,6,8,10,2};
    mergeSort(input, 0, input.size()-1);
    for(int i =0;i<input.size();i++){
        cout<<input[i]<<" ";
    }
return 0;
}