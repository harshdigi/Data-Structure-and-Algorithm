#include<bits/stdc++.h>
using namespace std;
int unaffectedChar(string dataStream){
    int answer =0 ;
    int i =0, j=dataStream.length()-1;

    while(i<=j){
        if(dataStream[i] == dataStream[j]){
            answer++;
        }
        i++;
        j--;
    }
    if(dataStream.length %2 ==0){
        return answer*2;
    }
    return (answer*2)-1;
    
}
int main(){
    
unaffectedChar("aplhxxdida");
return 0;
}