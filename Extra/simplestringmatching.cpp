#include<bits/stdc++.h>
using namespace std;
int main(){
string txt = "My name is Harsh";
string ptn= "Harsh";
int  i=0;
while (i<=txt.length()-ptn.length()){
    if(txt[i] == ptn[0]){
        int j=0;
        while(j<ptn.length()){
            if(txt[i+j]==ptn [j] ){
                j++;
            }
            else{
                break;
            }
            if (j==ptn.length()){
                cout << i;
            return 0;
            }
        }
    }
    
    i++;
}
if(i==txt.length())
cout<<-1;
return 0;
}