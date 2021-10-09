#include<bits/stdc++.h>
using namespace std;
vector<int> WaveArray(vector<int> A){
    int n = A.size();
    for(int i=0;i<A.size();i=i+2){
        if(i==n-1 && n%2==1 ){
            continue;
        }
        swap(A[i],A[i+1]);
    }
    return A;
}
int main()
{
    vector<int> input ={1,2,3,4,5,6};
    vector<int> res = WaveArray(input);
    return 0;
}