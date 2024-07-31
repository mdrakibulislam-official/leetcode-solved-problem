class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        string s ="";
        for(int i=0 ; i<board.size(); i++){
            s="";
            for(int j=0; j<board.size(); j++){
                if(s==""){
                s=s+board[i][j];
                }else if(board[i][j]=='.'){
                    continue;
                }else if(s.contains(board[i][j])){
                    return false;
                }else{
                    s=s+board[i][j];
                }
            }
            
        }

        for(int i=0 ; i<board.size(); i++){
            s="";
            for(int j=0; j<board.size(); j++){
                if(s==""){
                s=s+board[j][i];
                }else if(board[j][i]=='.'){
                    continue;
                }else if(s.contains(board[j][i])){
                    return false;
                }else{
                    s=s+board[j][i];
                }
            }
            
        }

        for(int i=0; i<board.size(); i=i+3){
            s="";
            for(int j=0; j<9; j++){
                if(j%3==0){
                    s="";
                }
                for(int k=0; k<3; k++){
                    if(s==""){
                        s=s+board[j][k+i];
                    }else if(board[j][k+i]=='.'){
                        continue;
                    }else if(s.contains(board[j][k+i])){
                        return false;
                    }else{
                        s=s+board[j][k+i];
                    }
                }
            }
        }

        

        return true;
        
    }
};
