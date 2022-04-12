/* The board is made up of an m x n grid of cells, where each cell has an initial state: live (represented by a 1) or dead (represented by a 0). Each cell interacts with its eight neighbors (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):

Any live cell with fewer than two live neighbors dies as if caused by under-population.
Any live cell with two or three live neighbors lives on to the next generation.
Any live cell with more than three live neighbors dies, as if by over-population.
Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the m x n grid board, return the next state.
*/
  
  
class Solution {
public:
    int countlive(vector<vector<int>> &board,int i,int j){
        int n=board.size();
        int m=board[0].size();
        int c=0;
        if(i-1>-1 && j-1>-1 && (board[i-1][j-1]==1 || board[i-1][j-1]==-1)){
            c++;
        }
        if(i-1>-1 && (board[i-1][j]==1 || board[i-1][j]==-1)){
            c++;
        }
        if(j-1>-1 && (board[i][j-1]==1 || board[i][j-1]==-1)){
            c++;
        }
        if(i+1<n && j+1<m && (board[i+1][j+1]==1 || board[i+1][j+1]==-1)){
            c++;
        }
        if(i+1<n && (board[i+1][j]==1 || board[i+1][j]==-1)){
            c++;
        }
        if(j+1<m && (board[i][j+1]==1 || board[i][j+1]==-1)){
            c++;
        }
        if(i-1>-1 && j+1<m && (board[i-1][j+1]==1 || board[i-1][j+1]==-1)){
            c++;
        }
        if(i+1<n && j-1>-1 && (board[i+1][j-1]==1 || board[i+1][j-1]==-1)){
            c++;
        }
        return c;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count = countlive(board,i,j);
                if(board[i][j]==1){
                    if(count<2 || count>3){
                        board[i][j]=-1;
                    }
                }
                else{
                    if(count==3){
                        board[i][j]=-2;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==-1){
                    board[i][j]=0;
                }
                else if(board[i][j]==-2){
                    board[i][j]=1;
                }
            }
        }
        
    }
};
