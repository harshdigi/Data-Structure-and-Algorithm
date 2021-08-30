/*
INTERVIEW BIT "Partition"
Difficulty  "Medium" 

You are given a 1D integer array B containing A integers.

Count the number of ways to split all the elements of the array into 3 contiguous parts so that the sum of elements in each part is the same.

Such that : sum(B[1],..B[i]) = sum(B[i+1],...B[j]) = sum(B[j+1],...B[n]) 

Example Input
Input 1:
A = 5
B = [1, 2, 3, 0, 3]
Input 2:
 A = 4
 B = [0, 1, -1, 0]


Example Output
Output 1:
 2
Output 2:
 1
*/
#include<bits/stdc++.h>
using namespace std;
int partiion(int A, vector<int> B){
    int sum=0;
    int result =0;
    for(int i=0;i<A;i++){
        sum = sum+B[i];

    }

    if(sum%3==0){
        int sum1= sum/3;
        int sum2 = 2* sum1;
        sum= 0;
        int count =0;
        for(int i =0;i<A-1;i++){
            sum = sum+B[i];
            if(sum == sum2){
                result+=count;
            }
            if(sum ==sum1){
                count++;
            }
        }
    }
    return result;
}
int main()
{

    vector<int> input = {1,2,3,0,3};
    int size = input.size();
    cout<< partiion(size,input);
    return 0;
}
