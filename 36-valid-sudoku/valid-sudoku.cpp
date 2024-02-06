class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

         const int n=9;
        bool row[n][n]={false};
        bool column[n][n]={false};
        bool area[n][n]={false};
        int plot=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if(board[i][j]=='.'){
                    continue;
                }
                int number=board[i][j]-'0'-1;
                int plot= (i/3)*3 + j/3;

                

                if(row[i][number]==true || column[j][number]==true ||area[plot][number]==true){
                    return false;
                }
                  row[i][number]=true;
                  column[j][number]=true;
                  area[plot][number]=true;
            }

        }
        return true;

        
    }
};