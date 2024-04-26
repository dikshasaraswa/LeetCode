class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0;
        int m=0;
        int e=nums.size()-1;
        while(m<=e){
            switch(nums[m]){
                case 0:
                swap(nums,s,m);
                m++;
                s++;
                break;
                case 1:
                 m++;
                 break;
                 case 2:
                 swap(nums,m,e);
                  e--;
                  break;
            }
        }
    }
    private:
    void swap(vector<int>& arr, int p1, int p2) {
        int temp = arr[p1];
        arr[p1] = arr[p2];
        arr[p2] = temp;
    }

};