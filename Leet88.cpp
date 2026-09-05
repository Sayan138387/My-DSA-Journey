# MERGE 2 SORTED ARRAY WITHOUT EXTRA SPACE
#include <bits/stdc++.h>
using namespace std;
void merge (vector<int>& nums1, int m, vector<int>& nums2, int n){
  int size = m + n;           # total elements after merging
int index = size - 1;          # position to insert in nums1
int i = m - 1;                # last position to insert in nums1
int j = n - 1;                    # last position to insert in nums2
while(i >= 0 && j >= 0){
if(nums1[i] <= nums2[j]){
nums1[index--] = nums2[j--];
}
else {
nums1[index--] = nums2[j--];
}
}

while(j >= 0){
nums1[index--] = nums2[j--];
}


int main(){
  vector<int> nums1 = {1,2,3,0,0,0};
m = 3
  vector<int> nums2 = {2,5,6}
  n = 3

  merge(nums1, m, nums2, n);
cout<< "So the Merged Array:";
for(int num: num1){
cout<< num <<" ";
}
cout<<endl;
return 0;
}










