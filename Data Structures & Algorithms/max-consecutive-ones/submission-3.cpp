class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int position_of_array = 0;
        int return_value =0;
        int stack_size =0;
        while(position_of_array != nums.size()){
            if(nums[position_of_array]==1 ){
                stack_size+=1;
                
            }
            else{
                if(return_value<stack_size)return_value = stack_size;
                stack_size=0;
            };
            
            position_of_array+=1;
        };
        if(nums[position_of_array-1]==1 && position_of_array-1==nums.size()-1 && stack_size>return_value)return_value=stack_size;
        return return_value;
    };


};