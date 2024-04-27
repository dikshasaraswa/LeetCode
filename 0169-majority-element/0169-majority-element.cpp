class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       int c = 1;
        int r = nums[0];
        for(int i =1;i<n;i++){
            if(c==0){
                r = nums[i];
            }
            if(r == nums[i]){
                c++;
            }
            else{
                c--;
            }
        }
        return r;
    }
};