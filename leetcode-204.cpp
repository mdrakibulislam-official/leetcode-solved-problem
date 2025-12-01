class Solution {
public:

    int countPrimes(int n) {
        int count = 0;
        vector<bool> is_prime(n+1,true);
        is_prime[0] = false;
        is_prime[1] = false;
        for(int  i=2; i<n; i++){
            if(is_prime[i]){
                count++;
                for(int j=i*2; j<n; j= j+i){
                    is_prime[j] = false;
                }
            }
        }
        return count;
    }
};
