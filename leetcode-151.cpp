class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;

        string word ="";
        string sentence ="";
        int space=0;
        for(int i=0 ; i<s.length(); i++){
            if(i==0 && s[i]==' '){
                space++;
                continue;
            }else if(i==s.length()-1){
                if(s[i]==' '&&space==0) st.push(word);
                else if(s[i]!=' '){
                    word += s[i];
                    st.push(word);
                };
            }
            else if(s[i]!=' '){
                word +=s[i];
                space=0;
            }
            
            else if(s[i]==' '&& space>0){
                space++;
            }
            else{
                st.push(word);
                word = "";
                space++;
            }
        }
        sentence = st.top();
        st.pop();
        while(!st.empty()){
            sentence = sentence +" "+ st.top();
            st.pop();
        }
        return sentence;
    }
};
