class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int poa = 0, length = arr.size(), temp_poa = 0, i = 0, j = 0, k = 1,
            array_length = length - 1;
        while (poa < length) {
            temp_poa = poa;
            if(poa!=length-1)arr[poa]=arr[poa+1];
            while (temp_poa < length) {
                
                if (arr[temp_poa] > arr[poa]) {
                    arr[poa] = arr[temp_poa];
                } else {
                    arr[poa] = arr[poa];
                }
                temp_poa += 1;
            }
            poa += 1;
        }
        arr[array_length] = -1;
        return arr;
    }
};