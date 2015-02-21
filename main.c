#include <stdio.h>
#include "bsearch.h"

struct TestCase
{
    int testKey;
    int testArr[32];
    int len;
} testCases[] = {
    {8,  { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 10, 11, 22}, 13 },
    {23, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 10, 11, 22}, 13 },
    {0,  { 1                                       }, 1  },
    {2,  { 1                                       }, 1  },
    {1,  { 2,2                                     }, 2  },
    {1,  {                                         }, 0  }
};

int main(void)
{
    for (int i = 0; i < sizeof(testCases) / sizeof(testCases[0]); ++i)
    {
        struct TestCase item = testCases[i];
        int len  = item.len;

        printf("Array[%u]: ", len);

        for(int j = 0; j < len;++j)
        {
            printf("%d ",item.testArr[j]);
        }

        printf("\n");
        printf("Key : %d\n", item.testKey);

        int idx;

        if(!bsearch(item.testArr,item.testKey,len,&idx))
        {
            printf("NOT FOUND\n");
            continue;
        }
         printf("FOUND %d\n",idx);

    }
}
