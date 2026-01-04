class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size()-1;
        int count = 0;
        bool space = true;
        for(int i=length; i>=0; i--){
            if(s[i] != ' '){
                count++;
                space = false;
            }else if(space == true){
                continue;
            }else{
                break;
            }
        }
        return count;
        
    }
};
