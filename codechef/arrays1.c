

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
int ani = 2 * numsSize;
int *result= malloc(sizeof(int) * ani);
for (int i = 0; i < numsSize; ++i)
{
   result[i] = nums[i];
   result[i + numsSize] = nums[i];
}
*returnSize = ani;
return result;
}