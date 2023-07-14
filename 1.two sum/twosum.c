#include <stdlib.h>
#include <stdio.h>>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *numIndices = (int *)malloc(sizeof(int) * numsSize);
    int complement;
    int i;

    for (i = 0; i < numsSize; i++)
    {
        complement = target - nums[i];
        for (int j = 0; j < i; j++)
        {
            if (nums[j] == complement)
            {
                numIndices[0] = j;
                numIndices[1] = i;
                *returnSize = 2;
                return numIndices;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}