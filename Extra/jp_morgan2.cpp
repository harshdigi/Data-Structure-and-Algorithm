#include<bits/stdc++.h>
using namespace std;
int getMax(vector<int> boxes, vector<int> uPb,int tS){
    int units;
    while(tS--){
        int maxElementIndex = max_element(uPb.begin(),uPb.end()) - uPb.begin();
        if(tS>=boxes[maxElementIndex]){
            tS=tS-boxes[maxElementIndex];
            units = uPb[maxElementIndex]* boxes[maxElementIndex];
            uPb.erase(uPb.begin()+maxElementIndex);
            boxes.erase(boxes.begin()+maxElementIndex);
        }
        else{
            units = tS* uPb[maxElementIndex];

            tS =0;

        }
    }
    return units;

}
int main(){
vector<int> boxes= {1,2,3}, uPb= {3,2,1};
int tS=3;
getMax(boxes, uPb, tS);
return 0;
}