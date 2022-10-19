#include<bits/stdc++.h>
using namespace std; 

int output(string in){
    unordered_map<char,int> fq;
    for(int i=0;i<in.length();i++){
        fq[in[i]]++;
    }
    int ans =0;
    if(fq['?']%2==0){
        ans = fq['?'];
        fq['?']=0;
    }
    else {
        ans= fq['?']-1;
        fq['?'] = 1;
    }

    while(fq['?']--){
        if(fq['1']%2 !=0){
            fq['1']++;
            fq['q']--;
        }
        else if(fq['0']%2 !=0){
            fq['0']++;
            fq['q']--;
        }
        else{
                fq['0']++;
            fq['q']--;
        }
    }
    if(fq['1']%2 ==0 && fq['0']%2 ==0){
        ans = ans + fq['1']+fq['0'];
    }
    else if(fq['1']%2 ==0){
        ans = ans + fq['1'];
    }
    else if (fq['0']%2 ==0){
        ans = ans + fq['0'];
    }
    return ans;
} 
int main(){

int t =0;
cin>>t;
while(t--){
    string input;
    cin>>input;
    cout<<output(input);
}
return 0;
}