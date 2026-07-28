class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int num =0;
        // int ans;

        for(int i=0;i<nums.size();i++){

            if(nums[i]==nums[num]){
                count++;
            }
            else{
                count --;

            }
            if(count<=0){
                num=i+1;
            }
            cout<<num<<" ";
        }
        return nums[num];

         
        

    }
};