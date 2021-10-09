#include<bits/stdc++.h>
using namespace std;

int hotel (vector<int> arrive, vector<int> depart, int K){
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    int i =0, j =1;
    int count =0;
    while(i<depart.size() && j<arrive.size()){
        if(depart[i]>arrive[j]){
             count++;
            if(count==K){
                return 0;
            }
        }
        i++;
        j++;

    }
    return 1;
}
int main()
{
    vector<int> A = {3,6,4,13},B={5,17,19,23};
    int C =2;
    cout<<hotel(A,B,C);
    return 0;
}