#include<bits/stdc++.h>
using namespace std;
bool compareInterval(string i1, string i2)
{   
    int index1 = i1.find('-');
    int index2 = i2.find('-');
    return lexicographical_compare(i1.begin()+index1, i1.end(), i2.begin()+index2,
                                i2.end());
}
vector<string> reorderLogs(vector<string> &A) {
    int pivot =0;
    int low = 0, high = A.size()-1;
    while(low<high){
        if(A[low][A[low].length()-1] >=48 && A[low][A[low].length()-1] <=57){
            swap(A[low], A[high]);
            high--;
            pivot = high;
        }
        else{
            low++;
        }
    }
    sort(A.begin(), A.begin()+pivot+1, compareInterval);
    reverse(A.begin() +pivot+1, A.end());
    return A;
}
int main(){
    vector<string> in = {"a1-9-2-3-1","g1-act-car","zo4-4-7","ab1-off-key-dog","a8-act-zoo"};
reorderLogs(in);
return 0;
}