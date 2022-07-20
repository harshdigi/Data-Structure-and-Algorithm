#include <iostream>

using namespace std;

void printOnetoN(int);

int main(){
    int n=10;
    printOnetoN(n);
}

void printOnetoN(int n){
    if(n==0){
        return;
    }
    else{
        
        printOnetoN(n-1);
        cout<<n<<" ";
    }
}