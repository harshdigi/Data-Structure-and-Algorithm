#include<bits/stdc++.h>
using namespace std;
class Heap{
    vector<int> v;
    bool minHeap;
    // this function is used to compare the two elements based on the type of heap 
    bool compare(int a , int b){
        if(minHeap){
            return a<b;
        }
        else{
            return a>b;
        }
    }
    void heapify(int idx){
        int left  = 2* idx;
        int right = left+1;

        int min_idx = idx;
        int last_idx = v.size()-1;
        
        if(left<=last_idx  && compare(v[left], v[idx])){
            min_idx = left;
        }
        if(right<=last_idx && compare(v[right], v[idx])){
            min_idx = right;
        }
        if(min_idx != idx){
            swap(v[idx], v[min_idx]);
            heapify(min_idx);
        }
    }
    public : 
        Heap(int default_size = 10, bool type = true){
            v.reserve(default_size);
            // blocking the index position because heap implementation do not use 0th index of an array
            v.push_back(-1);
            // if type is true then we implement minHeap else we implement maxHeap
            minHeap = type;
        }
        // push function is used to push the element in heap
        // time complexity of pushion in heap is O(n)
        // push function takes interger as  input 
        void push (int d){
            //firstly push the element at the end then check whether it voilates the "Heap Order Property"
            v.push_back(d);
            // index of newly pushed element will be 
            int idx = v.size()-1;
            // index at which parent of the newly pushed element is 
            int parent = idx/2;

            // now run the loop untill heap order property is satisfied or idx reaches to root node 
            // we write the compare function to check type of the heap and do the comparison of the values accordingly
            while(idx>1 and compare(v[idx], v[parent])){
                    
                    swap(v[idx],v[parent]);
                    idx= parent;
                    parent= parent/2;
            }

        }
        // top function will return the element at index 1 which will minimum element in minHeap and maximin element in maxHeap
        int top(){
            return v[1];
        }
        void pop(){
            int last_idx = v.size()-1;
            swap(v[1], v[last_idx]);
            heapify(1);
        }
        void print(){
            for(int i =1;i<v.size();i++){
                cout<<v[i]<<" ";
            }
        }
};

void menu(){
    cout<<"Enter your choice"<<endl;  
    cout<<"1. Insert an element"<<endl;
    cout<<"2. Delete an element"<<endl;
    cout<<"3. Get top elemenet"<<endl;
    cout<<"4. Print Heap"<<endl;
    cout<<"5. Exit"<<endl;
}

int main(){

int heapSize;
bool type;

cout<< "Enter the size of heap, Default size of the heap is 10 and the size is dynamic gets automatically increased if the alloted memory is filled: "<<endl;
cin>>heapSize;
cout<<"Select the type of Heap, Enter 1 for min heap and 0 for max heap: "<<endl;
cin>>type;

Heap h = Heap(heapSize, type);

menu();
int option;
cin>>option;
switch (option)
{
case 1 : {
    cout<<"Enter the element";
    int input;
    cin>>input;
    h.push(input);
    menu();
    break; }
case 2 : {
    h.pop();
    cout<<"Deleted top element";
    menu();
    break; }
case 3:{
    cout<<"Top element is "<< h.top();
    menu();
    break;}
case 4:{
    cout<<"Printing the heap"<<endl;
    h.print();
    menu();
    break;}
case 5:{
    cout<<"Exiting the program"<<endl;
    exit(0);}
default:{
    cout<<"Please select the valid option"<<endl;
    menu();
    break;}
}

return 0;
}