// brute force- using linear search
// tc-o(n)
// sc-o(1)

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n=nums.size();
//    if(n==0||n==1){
//        return 0;
//    }

//    if(nums[0]>nums[1]){
//        return 0;
//    }

//    if(nums[n-1]>nums[n-2]){
//        return n-1;
//    }

//    for(int i=1;i<n-1;i++){
//        if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
//            return i;
//        }
//    }
//    return -1;
//     }
// };




// 2)optimized appraoch-using Binary search (iterative)
// tc-o(logn)
// sc-o(1)


 class Solution {
public:
    int findPeakElement(vector<int>& nums) {

 int n = nums.size();
        int low = 0;
        int high = nums.size()-1;
        while(low < high){
            int mid = (low + high) >> 1;
            if(nums[mid] > nums[mid+1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }   
};
