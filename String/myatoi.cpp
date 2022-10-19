#include<bits/stdc++.h>
using namespace std;
  int myAtoi(string s) {
        long long int num = 0;
        bool neg = false;
        int p =0;
        int i;
      
        bool check = true;
        for(i =0;i<s.length(), check;i++){
            if(s[i] == '+'){
                continue;
            }
            else if(s[i] == '-' ){
                neg=true;
            }
            else if (s[i] == ' '){
                continue;
            }
            else if((s[i] < 48 || s[i] > 57) ){
                check = false;
            }
            else{
                int digit = s[i] - '0';
                num  = (num * 10)+digit;
                
                if (neg and num >INT_MAX){
                    return INT_MIN;
                }
                else if(num > INT_MAX){
                    return INT_MAX;
                }
                p++;
            }
        }
        
        if(neg){
            return num * -1;
        }
        return num;
}
int main(){
cout<<myAtoi("+1");
return 0;
}