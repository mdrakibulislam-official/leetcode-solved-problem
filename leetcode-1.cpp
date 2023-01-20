class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> v;

        for(int i =0; i<=len; i++){
            for(int j=i+1; j<=len-1; j++){
                int a = nums[i];
                int b = nums[j];
                    if(a + b ==target){
                        v.push_back(i);
                        v.push_back(j);
                        
                    }
            }
    }
    return v;
    }
};
