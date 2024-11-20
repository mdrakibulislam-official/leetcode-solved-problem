class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int width = nums.size();
        vector<int> expected;
        expected.push_back(nums[0]); //insert 1
        for(int i=1; i<width; i++){
            if(nums[i] != expected.back()){ //compare between 2 and 1
                expected.push_back(nums[i]); 
            }
            else{

            }
        }
        
        int k = expected.size();
        for(int j = 0; j<k; j++){
            nums[j] = expected[j];
        }
        return k;
    }
};
