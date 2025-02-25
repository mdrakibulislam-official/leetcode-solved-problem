class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> result;
        set<vector<int>> triples;

        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size()-1; i++){
            int j=i+1;
            int k = nums.size()-1;

            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    triples.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    k--;
                    }
            }
        }
        for(auto setVec: triples){
            result.push_back(setVec);
        }
        return result;
    }
};
