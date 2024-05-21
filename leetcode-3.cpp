class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        string subs = "";
        string temp="";
        bool check = false;
        if (s.length() == 0) {
            return 0;
        } else {
            for (int i = 0; i < s.length(); i++) {
                if (subs.length() == 0) {
                    subs += s[i];
                } else {
                    for (int j = 0; j < subs.length(); j++) {
                        if (subs[j] == s[i] || check) {
                            if(check)temp +=subs[j];
                            check = true;
                        }
                        
                         else {
                            check = false;
                        }
                    }
                    if (check) {
                        result =
                                result < subs.length() ? subs.length() : result;
                        temp+=s[i];
                        subs = "";
                        subs += temp;
                        temp="";
                        check=false;
                    }else{
                        subs+=s[i];
                    }
                }
            }
            result = result < subs.length() ? subs.length() : result;
            return result;
        }
    }
};
