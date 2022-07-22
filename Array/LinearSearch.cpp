#include<bits/stdc++.h>
using namespace std;
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
cout<<"Enter the element you want to search in the array: ";
int key;
cin>>key;
cout<<endl;
int i;
for(i=0;i<size;i++){
    if(key== arr[i]){
        cout<<"Element is present at index: "<<i<<endl;
        break;
    }
}
if(i==size){
    cout<<"Element is not present int the array"<<endl;
}
return 0;
}