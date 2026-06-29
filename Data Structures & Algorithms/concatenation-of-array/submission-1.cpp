class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length=0,count=0;
        vector<int> ans=nums;
        length=nums.size();
        while(count<length){
            ans.push_back(nums[count]);
            count+=1;
        }
        return ans;
    }
};