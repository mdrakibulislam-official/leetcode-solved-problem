class Solution {
public:
    int firstDigit(int n) {
        while (n >= 10) {
            n /= 10;
        }
        return n;
    }
    int lastDigit(int n){
        return n%10;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int numberOfPair = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(gcd(firstDigit(nums[i]),lastDigit(nums[j])) == 1){
                    numberOfPair++;
                }
            }
        }
        return numberOfPair;
    }
};
