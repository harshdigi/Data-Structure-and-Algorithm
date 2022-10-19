#include<iostream>

using namespace std;

int main(){
    int N=10;
    int sum=0;
    int i=1;
    int j=N;
    while(i<=j){
        if(i!=j){
        sum=sum+i+j;}
        else{
            sum=sum+i;
        }
        i++;j--;
    }
    cout<<sum;

}