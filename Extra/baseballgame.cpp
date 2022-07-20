#include<bits/stdc++.h>
using namespace std;
int calPoints(vector<string>& ops) {
        int res=stoi(ops[0]), prev1=stoi(ops[0]), prev2=0;
        for(int i=1;i<ops.size();i++){
            if(ops[i] == "+"){
               int sum = prev1+prev2;
                res = res + prev1+prev2;
                prev2=prev1;
                prev1=sum;
            }
            else if( ops [i] == "C"){
                res= res-prev1;
                prev2=prev
            }
            else if (ops [i] == "D" ){
                res= res+ (prev1 *2);
                prev2=prev1;
                prev1= prev1*2;
            }
            else{
                
                 res=res+stoi(ops[i]);
                prev2=prev1;
                prev1= stoi(ops[i]);
                
            }
        }
        return res;
    }

int main(){
    vector<string> in= {"5","2","C","D","+"};
    calPoints(in);
return 0;
}