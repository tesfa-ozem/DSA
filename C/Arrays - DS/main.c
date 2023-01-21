#include <stdio.h>
#include <stdbool.h>
/** 
*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
*
*You may assume that each input would have exactly one solution, and you may not use the same element twice.
*
*You can return the answer in any order.
*/

int num[4] = {2,7,11,15};
int k = 9;

int retunedValue[2];
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target)
{
    for(int i=0; i<numsSize; i++){
        for(int j=1;j<=numsSize; i++){
            printf("%d ",nums[i]+nums[j]);
            if(nums[i]+nums[j] == k){
                static int r[2];
                r[0]=nums[i];
                r[1]= nums[j];
                return r;
            }
        }
    }
    return retunedValue;
}
int main(int argc, char const *argv[])
{
    printf("%d",twoSum(num,4,k)[0]);
    
    return 0;
}
