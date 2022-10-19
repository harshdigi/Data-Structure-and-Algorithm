#include<bits/stdc++.h>
using namespace std;
//string 
// str =  "bst43bst53abc43abc435"
// output 43 - 2

void solution(string s){
    unordered_map<int,int> fq;
    int currNum = 0;
    int j = 0;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            int x  = s[i] -'0';
            if(currNum ==0  and x ==0 ){
                continue;
            }
            currNum = currNum* pow(10,j) + x;
            j++;
        }
        else{
            if(currNum != 0){
                fq[currNum]++;
                currNum =0;
                j =0;
            }
        }

    }
    if (currNum != 0){
        fq[currNum]++;
        currNum =0;
        j=0;
    }

    int maxFq =INT_MIN;
    int maxN = 0;
    for(auto i = fq.begin(); i!=fq.end();i++){
        if(i->second >maxFq){
            maxFq = i->second;
            maxN = i->first;
        }
    }

    cout<<maxN<<"-"<<maxFq;

}

int main(){
string s  = "bst43bst53abc43abc435xyz043";
solution(s);
return 0;
}