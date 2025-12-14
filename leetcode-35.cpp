class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = (left+right) /2;

        while(nums[mid] != target && left < right){
            if(target < nums[mid]){
                right = mid-1;
                mid = (left+right) /2;
            }else if(target > nums[mid]){
                left = mid+1;
                mid = (left+right) /2;
            }
        }
        if(nums[mid] >= target ){
            return mid;
        }else return mid+1;
    }

};
