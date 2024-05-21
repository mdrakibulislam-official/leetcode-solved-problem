class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxContainer = 0;

       int left = 0; 
       int right = height.size()-1;

       while(left<right){
        if(height[left]<height[right]){
            maxContainer = maxContainer < height[left]*(right-left) ? height[left]*(right-left) : maxContainer;
            left++;
        }else{
            maxContainer = maxContainer < height[right]*(right-left) ? height[right]*(right-left) : maxContainer;
            right--;
        }
       }
       return maxContainer;
    }
};
