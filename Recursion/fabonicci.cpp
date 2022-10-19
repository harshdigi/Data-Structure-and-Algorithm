#include <iostream>

using namespace std;
int  fabo(int n);
int main(){
    int n=3;
   cout<<fabo(n);
   return 0;
 
}
int fabo(int n){
    if(n<=1){
        return n ;
    }
    else{
        return fabo(n-1) + fabo(n-2);
    }

}