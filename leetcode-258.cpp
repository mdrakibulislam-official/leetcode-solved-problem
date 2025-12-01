class Solution {
public:
    int addDigits(int num) {
        int div= num;
        int check = num;

        while(check != 0){
            int sum = 0;
            int divisor = div;
            while(divisor != 0){
                sum += divisor%10;
                divisor = divisor/10;
            }
            div = sum;
            check = div/10;
        }
        
        return div;
    }
};
