#include<iostream>

using namespace std;

int cutRope(int n, int a,int b,int c){
   if(n==0)return 0;
   if(n<0)return -1;
   int res =max(cutRope(n-a,a,b,c),cutRope(n-b,a,b,c));
   res= max(res,cutRope(n-c,a,b,c));
    if(res==-1)return -1;
    return res+1;
}

int main(){
    int n=5,a=2,b=1,c=5;
    cout<<cutRope(n,a,b,c);
    return 0;
}