#include<bits/stdc++.h>
using namespace std;

vector<int> sortthearray(vector<int> arr){
        vector<int> res;
        int count_1 =0, count_2=0, count_3=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] ==1){
               count_1++; 
            }
            else if(arr[i]==2){
                count_2++;
            }
            else if (arr[i] ==3){
                count_3++;
            }
        }
        // 3 = 
        while(count_3--){
           res.push_back(3);
        }
        while(count_2--){
            res.push_back(2);
        }
        while(count_1--){
            res.push_back(1);
        }

        return res;

}
int main(){
    vector<int> arr = {1,2,3,3,2,2,3,1,2};
    arr = sortthearray(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";
    }
return 0;
}