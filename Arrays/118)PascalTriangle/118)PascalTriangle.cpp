class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans(numRows);//creating ans vector
         for(int i=0;i<numRows;i++){
        ans[i].resize(i+1);//resizing each row of ans vector
        ans[i][0]=ans[i][i]=1;//initializing 1st and last elemnt of each row with 1
        for(int j=1;j<=i-1;j++){//for middle elemnts 
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
        }
    }
    return ans;
    }
};

// t.c-o(n2) because for each row we are traversing at max n columns
// s.c-o(n2) becausewe are storing n colums into ans vector


// approach
// make an ans vector
// visualize the pascal triangle as 2d vector
// for numRows=5
// 1
// 11
// 121
// 1331
// 14641

// we can see that the 1st element and last element of each row is 1
// i.e. ans[i][0]=ans[i][i]=1

// middle elelments
// 3=1+2
// [3,1]=[2,0]+[2,1]
// ans[i,j]=ans[i-1][j-1]+ans[i-1][j]
// for looping through middle elements we will not consider the 0th and ith element therefore travsrse from 1 to i-1


// no.of elements in each row is incremented by 1 therefore we camn declare a 2d vector and resize each row
// for i=0, we have 1 element i.e i+1
// for i=1,e have 2 elements i.e. i+1 ....and for others as well
// resize(i+1)
