class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = nums[0];
        int large = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<small){
                small=nums[i];
            }
            if(nums[i]>large){
                large=nums[i];
            }
        }
        return gcd(small, large); 

    }
};
