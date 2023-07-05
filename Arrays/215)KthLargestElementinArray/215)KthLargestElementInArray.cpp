// Using Min Heap - for every node, the value of the node is smaller than it's child nodes. And the ROOT is the smallest in the heap.

// Approach
// Store the first K elements of the array into the heap
// For the remaining elements of the array
// if the element of array is greater than topmost element of heap
// Delete from the Heap (POP)
// Insert this element into the heap.
// This way, in the end only the K - Largest elements of the array are stored in the heap.
// With the Kth smallest element being on the top as this is a MIN HEAP.


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minHeap;

        for(int i=0;i<k;i++){
            minHeap.push(nums[i]);
        }


        for(int i=k;i<nums.size();i++){
            if(nums[i]>minHeap.top()){
                minHeap.pop();
                minHeap.push(nums[i]);
            }
        }

        return minHeap.top();
        
    }
};


// Time complexity:O(n∗logn)
// Space complexity:O(K)