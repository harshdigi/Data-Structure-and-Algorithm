#include<bits/stdc++.h>
using namespace std;
// [1 2 3 4 5 6 7 8 9]
// [1 2 3 4 5 6 7 8 9]
// [1 2 3 4 5 6 7 8 9]
int main(){
  int n =20;
  bool check  = true;
  int count=1;
  for(int i =1 ;i<=3;i++){
    count  =1;
    for(int j =1; j<=n;j++){

        if(i == 1){
            if(check and count==3){
                cout<<"*";
                check = false;
                count  =1;
            }
            else if (!check and count == 4 ){
                cout<<"*";
                check = true;
                count  =1;
            }
            else{
                cout<<" ";
                count++;
            }
        }
        if(i == 2){
            if(j%2 == 0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        if(i ==3){
            if(j==1){
                cout<<"*";
            }
            else if(count == 4){
                cout<<"*";
                count=1;
            }
            else{
                cout<<" ";
                count++;
            }
        }
    }
    cout<<endl;
  }
}