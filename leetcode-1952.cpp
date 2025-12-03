class Solution {
public:
    bool isThree(int n) {
        int num_divisors = 0;
        for(int i=1; i<=n; i++){
            if(n%i == 0){
                num_divisors++;
            }
            if(num_divisors>3){
                return false;
            }
        }
        if(num_divisors==3) return true;
        else return false;
    }
};
