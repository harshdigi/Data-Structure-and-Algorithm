#include<bits/stdc++.h>
using namespace std;
void maxRepeated (vector<string> input){
    unordered_map<string,int> mymap;
    for(int  i=0;i<input.size();i++){
        // increasing the freq for each name
        mymap[input[i]]++;
    }
    sort(mymap.begin(), mymap.end());
    int s = mymap.size();
    int i = 0;
    auto it  = mymap.begin();
    while(i<=s-2){
        i++;
        it++;
    }
    while(it != mymap.end()){
        cout<<it->first;
        it++;
    }

}
int main(){
vector<string> input = {"Tim","Ram","Ram","Tim","Tim", "Bob", "Harsh", "Aman"};
maxRepeated(input);
return 0;
}