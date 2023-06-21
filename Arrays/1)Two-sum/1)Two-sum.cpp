class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       std::vector<int> output(2,0);
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(nums[i]+nums[j]==target){
                   output[0]=i;
                   output[1]=j;
                   return output;
               }
           }
       }
       return output;//reuturn defalut values if no solution is found
    }
};