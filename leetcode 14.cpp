class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        bool check = false;
        for(int i=0; i<strs[0].length(); i++){
            for(int j=0; j<strs.size(); j++){
                if(strs[j][i] == strs[0][i]){
                    check = true;
                    
                }
                else{
                    check = false;
                    return s;
                } 
            }
            s =s+strs[0][i];
        }
        return s;
    }
};
