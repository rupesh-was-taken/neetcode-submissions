class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0;
        int j =0;
        int k =0;
        while(i != nums.size()){
            if(nums[i]==1 ){
                k+=1;
                }
            else{
                if(j<k)j = k;
                k=0;
            };
            i+=1;
        };
        if(nums[i-1]==1 && i-1==nums.size()-1 && k>j)j=k;
        return j;
    };


};