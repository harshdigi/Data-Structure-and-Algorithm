#include<bits/stdc++.h>
using namespace std;

int squareRoot(int A){
     if(A==1) return 1;
    long long int low=0,high=A/2;
    long long int mid=low+(high-low)/2;
    while(low<=high){
       mid=low+(high-low)/2;
       if(mid*mid<=A&&(mid+1)*(mid+1)>A)
        return mid;
       else if(mid*mid>A) high=mid-1;
       else low=mid+1;
    }
}
int main(){
    squareRoot(2);
return 0;
}