#include<bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n)
{
    sort(arr, arr+n);
    int j = n-1;
    long long int sum =0;
    int i=0;
    int ab1, ab2;
    while( i+1<j){
        ab1 = abs(arr[i] - arr[j]);
        ab2 = abs(arr[i+1] -arr[j]);
        sum += ab1+ab2;
        j--;
        i++;
    }
    ab1 = abs(arr[i]-arr[j]);
    ab2 = abs(arr[j] - arr[0]);
    sum += ab1+ab2;
    return sum;
}
int main(){
int arr[] = {4,2,1,8};
maxSum(arr, 4);
return 0;
}