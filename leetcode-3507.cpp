class Solution {
public:
    int minimumPairRemoval(vector<int>& nums){
        int operation = 0;

        while(!is_sorted(nums.begin(), nums.end())){
        int range = nums.size();
        int sum = INT_MAX, current = 0;
        
        for(int i=0; i<range-1; i++){
            if(nums[i] + nums[i+1] <sum){
                sum = nums[i] + nums[i+1];
                current = i;
            }
        }
        nums.insert(nums.begin() + (current), sum);

        nums.erase(nums.begin() + (current+1), nums.begin() + (current+3));
        
        operation++;
        }
    return operation;
        
    }
};
