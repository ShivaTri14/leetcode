class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int doubledigsum=0;
        int singledigsum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=10){
                doubledigsum+=nums[i];
            }
            else{
                singledigsum+=nums[i];
            }
        }
        if(singledigsum==doubledigsum){
            return false;
        }
        else{
            return true;
        }
    }
};