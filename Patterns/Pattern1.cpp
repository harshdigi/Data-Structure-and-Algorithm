//Print the following pattern
/*  *
   ***
  *****
 ******* */
#include<bits/stdc++.h>
using namespace std;
int main(){
char matrix[5][8];
int i=0;
int j = 8/2;
int x=j;
for(int i =0 ; i<5;i++){
    for(int j=0;j<8;j++){
        matrix[i][j] = ' ';
    }
    cout<<endl;
}
while(i<4){
    for(int y=x;y<=j;y++){
        matrix[i][y] = '*';
    }
    i++;
    j++;
    x--;
} 
for(int i =0 ; i<5;i++){
    for(int j=0;j<8;j++){
        cout<<matrix[i][j];
    }
    cout<<endl;
}
return 0;
}