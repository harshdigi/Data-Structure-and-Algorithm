#include <iostream>

using namespace std;

void printNtoOne(int);

int main(){
    int n=10;
    printNtoOne(n);
}

void printNtoOne(int n){
    if(n==1){
        cout<<1;
        return;
    }
    else{
        cout<<n<<" ";
        printNtoOne(n-1);
    }
}