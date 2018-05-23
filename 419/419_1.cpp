#include<vector>
using namespace std; 

class Solution {
public:
    void deleteX(vector<vector<char>>& board,int x,int y){
        if(board[x][y]=='X')
            board[x][y]='.';
        else
            return;
        if(x+1<board.size())
            deleteX(board,x+1,y);
        if(y+1<board[x].size())
            deleteX(board,x,y+1);
    }
    int countBattleships(vector<vector<char>>& board) {
        int count=0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='X'){
                    deleteX(board,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
