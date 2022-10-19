#include<bits/stdc++.h>
using namespace std;
class A{
    public :
        void printA(){
            cout<<"base a";
        }
};
class B{
    public: 
        void printA(){
            cout<<"base b";
        }
};
class C : public A, public B{
};
int main(){
    C ob = C();
    ob.B::printA();
    return 0;
}