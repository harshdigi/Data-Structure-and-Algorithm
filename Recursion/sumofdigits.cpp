#include<iostream>

using namespace std;

int find_sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10 + find_sum(n/10);
    }
}

int main(){
    int n=8;
    cout<<find_sum(n);
    return 0;
}