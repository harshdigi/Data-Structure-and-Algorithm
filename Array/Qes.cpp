#include<bits/stdc++.h>
using namespace std;
void sol (vector<int> &A){
    long long int n = A.size();
    vector<int> right_max(n), left_max(n);
    int max=A[n-1];
    int  i= n-2;
    while(i>=0){
        right_max[i]=max;
        if(A[i]>max){
            max=A[i];
        }
        i--;
    }
    i=1;
    max = A[0];
    while(i<n){

        left_max[i]= max;
        if(A[i]>max ){
            max=A[i];
        }
        i++;
    }
    left_max[0]= 0;
    right_max[n-1]=0;
    vector<int> res(n);
    for(int i=0;i<n;i++){
        if(left_max[i]>right_max[i]){
            res[i]= left_max[i];
        }
        else{
            res[i]= right_max[i];
        }
    }
}
int main()
{   vector<int> input={215, 753, 162, 849, 367, 213, 577, 116, 518, 231, 618, 105, 693, 201, 871, 193, 868, 433, 107, 410, 898, 617, 51, 565, 413, 352, 991, 681, 382, 203, 33, 446, 439, 269, 645, 691, 493, 810, 153, 792, 705, 307, 349, 131, 191, 929, 537, 359, 946, 201, 181, 713, 896, 903, 541, 317, 308, 79, 686, 205, 661, 371, 545, 783, 269, 879, 21, 880, 681, 289, 426, 669, 585, 296};
    sol(input);
    return 0;
}