#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q;
    public: 
        void Push(int x){
            int n = q.size();
            q.push(x);
            for(int i =0;i<n;i++){
                int value = q.front();
                q.pop();
                q.push(value);
            }
        }
        int Pop(){
            int value = q.front();
            q.pop();
            return value;
        }

        int Top(){
            return q.front();
        }
        int Size(){
            return q.size();
        }
};
int main(){

return 0;
}