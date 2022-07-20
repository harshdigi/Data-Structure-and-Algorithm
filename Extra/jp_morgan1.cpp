#include<bits/stdc++.h>
using namespace std;
string solve (string in){
int wendyM, bobM;
int l= in.length();
bool chance = true,avail= true;
while(avail){
    if(chance){
        int i =1;
        for(;i<in.length()-1;i++){
            if(in[i] == 'w' and in[i-1] =='w' and in[i+1] =='w'){
                in.erase(in.begin()+ i);
                chance =false;
                i=1;
                break;
            }

        }
        if(i==in.length()-1 ){
            return "bob";
        }
    }
    else{

        int i =1;
        for(;i<in.length()-1;i++){
            if(in[i] == 'b' and in[i-1] =='b' and in[i+1] =='b'){
                in.erase(in.begin()+ i);
                chance =true;
                i=1;
                break;
            }

        }
        if(i==in.length()-1 ){
            return "wendy";
        }

    }
}
return "wendy";
}
int main(){
string  in =  "wwwbbbbwww";
solve(in);
return 0;
}