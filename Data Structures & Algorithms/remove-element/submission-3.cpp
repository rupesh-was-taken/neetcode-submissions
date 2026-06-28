class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        int position_of_array = 0,count=0, skip = 0, length = nums.size(), k = nums.size();
        while (position_of_array < length) {
            if (nums[position_of_array] == val) {
                nums[skip] = nums[position_of_array];
                count+=1;
            } else {
                nums[skip] = nums[position_of_array];
                skip += 1;
            }
            position_of_array += 1;
        }

        return k - count;
    }
};