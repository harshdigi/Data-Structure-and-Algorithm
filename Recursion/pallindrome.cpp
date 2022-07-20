#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string , int , int);

int main(){
    string str="AmmA";
    int e=str.length()-1;
    int s=0;
    cout<<checkPalindrome(str,e,s);
}

bool checkPalindrome( string str,int e,int s){
    if(s>=e){
        return true;
    }
    if(str[e]==str[s]){
        return checkPalindrome(str,e-1,s+1);
    }
    else{
        return false;
    }

}