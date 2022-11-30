// Bubble Sort I Runtime: O(n^2) average and worst case. Memory: O( 1).
// In bubble sort, we start at the beginning of the array and swap the first two elements if the first is greater
// than the second. Then, we go to the next pair, and so on, continuously making sweeps of the array until it is
// sorted. In doing so, the smaller items slowly"bubble" up to the beginning of the list.
// Input: 
// [3,4,2]
// Output:
// [2,3,4]

// Steps Involved:
//     Start:
//         bubbleSort function:
//         size = 3;
//         last = 3;
//         while loop start:
//             Iteration 1:
//                 last = 2;
//                 for loop started:
//                     Iteration 1 (i=0) (i<last is True):
//                         if arr[i] {3} > arr[i+1] {4} is False:
//                             end
//                     Iteration 2 (i=1) (i<last is True):
//                         if arr[i] {4} > arr[i+1] {2} is True:
//                             hence swap (arr [i] , arr[i+1])
//                         arr now = [3,2,4]
//                     Iteration 3 (i=2) (i<last is False):
//                         end 
//             Iteration 2 :
//                 last = 1:
//                 arr =[3,2,4]
//                     for loop started:
//                         Iteration 1 (i=0) (i<last is True):
//                             if arr[i] {3} > arr[i] {2} is True:
//                                 hance swap (arr[i],arr[i+1]);
//                             arr  now [2,3,4]
//                         Iteration 2 (i=1) (i<last is False):
//                             Stop for loop
//             Interation 3:
//                 last =0 
//                 hence while loop ends;
//     Stop

                    




#include<iostream>
using namespace std;
// time complexity: O(n^2)
void bubbleSort(int arr[], int size){

    int last = size;
    while(last--){
        for(int i =0; i<last; i++){
            if(arr[i] >arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
    }

}
int main(){
    int size =0 ;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int arr[size]={0};
    cout<<"Enter the elements of the array, You can maximum insert "<<size<<" elements in the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<< i+1<<": ";
        cin>>arr[i];
        cout<<endl;
    }
    bubbleSort(arr, size);
    cout<<"Sorted array is: ";
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<",";
    }
    cout<<arr[size-1];
    cout<<endl;
    return 0;
}