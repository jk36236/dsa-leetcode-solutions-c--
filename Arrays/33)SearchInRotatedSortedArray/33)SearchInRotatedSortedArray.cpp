// The Brute force approach:

// Iterates through the array and checks if the current element is equal to the target. If it is, then it returns the index of that element, otherwise, it returns -1. This approach has a time complexity of O(n).

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                return i;
            }
        }
        return -1;
    }
};



// The time complexity of the Brute force approach is O(n), where n is the size of the input array.
// space complexity-o(1)


// 2)The Binary search approach is based on the fact that a rotated sorted array can be divided into two sorted arrays.

// The approach starts with finding the mid element and compares it with the target element.
// If they are equal, it returns the mid index. If the left half of the array is sorted, then it checks if the target lies between the start and the mid, and updates the end pointer accordingly.
// Otherwise, it checks if the target lies between mid and end, and updates the start pointer accordingly.
// If the right half of the array is sorted, then it checks if the target lies between mid and end, and updates the start pointer accordingly.
// Otherwise, it checks if the target lies between start and mid, and updates the end pointer accordingly.
// This process continues until the target element is found, or the start pointer becomes greater than the end pointer, in which case it returns -1.
// This approach has a time complexity of O(log n).
// space complexity-o(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        int mid= (start+end)/2;
        while(start<=end){
            mid=(start+end)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(nums[start]<=nums[mid]){
                if(nums[start]<=target && nums[mid]>=target){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                if(nums[end]>=target && nums[mid]<=target){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};