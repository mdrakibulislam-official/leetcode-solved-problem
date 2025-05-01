class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) return true;
        if(n % 2 == 1) return false;
        else{
            for(long i = 2; i<=n; i= i*2){
                if(i == n) return true;
            }
        } 
        return false;
    }
};
