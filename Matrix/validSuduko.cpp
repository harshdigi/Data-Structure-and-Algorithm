#include<bits/stdc++.h>
using namespace std;
 bool isValidSudoku(vector<vector<char>>& board) {
        set<char> box[9];
        for(int i =0;i<board.size();i++){
            set<char> r;
            set<char> c;
            for(int j =0;j<board.size();j++){
                if(board[i][j] != '.'){
                    if(r.find(board[i][j]) != r.end()){
                        return false;
                    }
                    r.insert(board[i][j]);
                    int boxnum= (i/3)*3 + (j/3);
                    if(box[boxnum].find(board[i][j]) != box[boxnum].end()){
                        return false;
                    }
                    box[boxnum].insert(board[i][j]);
                }
                if(board[j][i] != '.'){
                    if(c.find(board[j][i]) != c.end()){
                        return false;
                    }
                    c.insert(board[j][i]);
                }   
            }
           
        }
        return true;
        
        
}
int main(){
vector<vector<char>> in;
for(int i=0;i<9;i++){
    vector<char> x;
    for(int j=0;j<9;j++){
        char c ;
        cin>>c;
        x.push_back(c);
    }
    in.push_back(x);
}
cout<< isValidSudoku(in);

return 0;
}