class Solution {
public:
    long long int reverse(int x) {
        int num = x;
        long long int result = 0;
        
        while(num !=0)
        {
            int k = num%10;
            result = result*10 + k;
            num = num/10;
        }
        
        if(result>INT_MAX || result<INT_MIN)
        {
            return 0; 
        } 
        
        return result;
    }
};
