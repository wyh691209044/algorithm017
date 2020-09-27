class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if(length == 0) return 0;
        int temp = nums[0];
        int k = 1;
        for(int i = 1;i<nums.size();i++){
            if(temp != nums[i]){
                nums[k] = nums[i];
                temp = nums[i];
                k++;
            }else{
                length--;
            }
        }
        return length;
    }
};