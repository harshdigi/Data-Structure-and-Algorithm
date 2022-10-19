#include<iostream>

using namespace std;

void printAllSubStr(string str,string curr="",int index=0){
    if(index==str.length()){
    cout<<curr<<" ";return;}
    printAllSubStr(str,curr,index+1);
    printAllSubStr(str,curr+str[index],index+1);

}
int main(){
    printAllSubStr("ABC");
    return 0 ;

}