#include <stdio.h>
#include <stdlib.h>
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/

int binary_Search(int* nums, int numsSize, int target, int left){
  int start = 0, end = numsSize - 1, mid;
  while(start+1<end){
    mid = (start+end) / 2;
    if(left){
      if(nums[mid] >= target) end = mid;
      else start = mid + 1;
    }else{
      if(nums[mid]<=target) start = mid;
      else end = mid - 1;
    }
  }
  if(left){
    if(nums[start] == target) return start;
    return nums[end] == target ? end : -1;
  }else{
    if(nums[end] == target) return end;
    return nums[start] == target ? start : -1;
  }
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* rst = (int *)malloc(*returnSize*sizeof(int));
    rst[0] = -1, rst[1] = -1;
    if(nums == NULL || numsSize == 0) return rst;
    rst[0] = binary_Search(nums, numsSize, target, 1);
    rst[1] = binary_Search(nums, numsSize, target, 0);
    return rst;
}

int main () {
  //int arr[] = {3,7,7,8,8,8},returnSize;
  int arr[] = {5,7,7,8,8,10},returnSize;
  int numsSize = sizeof(arr)/sizeof(arr[0]);
  int* output = searchRange(arr,numsSize,10,&returnSize);
  printf("%d %d",output[0],output[1]);
  return 0;
}
