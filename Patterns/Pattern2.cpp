// Print pattern 2
/*
    * * * * * * 
    *         *
    *         *
    *         *
    *         *
    * * * * * *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

int dir= 0;
int i=0;
int j =0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == 0 || j == 0 || i == 6 - 1 || j == 6 - 1)
                cout << '*'<< " ";
            else
                cout << " "
                     << " ";
        }
        cout << "\n";
    }
return 0;
}