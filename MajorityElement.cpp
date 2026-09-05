#include<iostream>
#include<vector>
using namesoace std;
int majorityElement(vector<int>& nums){
  int n = nums.size();
for(int i = 0; i <n; i++){
int count = 0;
for(int j = 0; j<n; j++){
if(nums[j] == nums[i]){
count++;
}
}
if(count > n/2){
return nums[i];
}
}
return -1
  }
int main(){
  vector<int> nums = {2,2,1,1,1,2,3);
cout << "MJ:"<< majorityElement(nums);
return 0;
}
