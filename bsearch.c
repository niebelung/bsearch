#include <assert.h>

#include "bsearch.h"

bool bsearch(const int * array, int key, int len, int * idx)
{
    assert(array != NULL);
    assert(idx != NULL);
    assert(len > 0);

    if (len == 0)
    {
        return false;
    }

    int iMin = 0;
    int iMax = len - 1;

    size_t last;

    bool result = false;

    while(iMin <= iMax)
    {
        size_t iMid = (iMax + iMin) / 2;
        if( key < array[iMid] )
        {
            last = iMid;
            result = true;
            iMax = iMid - 1;
        }
        else
        {
            iMin = iMid + 1;
        }
    }

    if(result)
    {
        *idx = last;
    }

    return result;
}
