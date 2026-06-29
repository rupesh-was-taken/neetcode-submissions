class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length=nums.size(),count=0;
        vector<int> ans=nums;
        while(count<length){
            ans.push_back(nums[count]);
            count+=1;
        }
        return ans;
    }
};