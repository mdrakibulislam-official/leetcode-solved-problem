class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int range = nums1.size()+nums2.size();
        vector<int> newVector(range);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), newVector.begin());
        if( range%2==0){
        int mid = range/2;
        double median = newVector[mid-1]+newVector[mid];
        return(median/2);
        }
        else{
        int mid = range/2;
        double median = newVector[mid];
        return(median);
        }
    }
};
