#include "headers.h"
#define N 4000

// 112 Клипалко Михаил Михайлович

int merge_sort(double data[], int k)
{
    int curr_size;
    int left_index;
    for (curr_size = 1; curr_size < k*N; curr_size = curr_size * 2)
    {
        for(left_index = 0; left_index < k*N - 1; left_index += 2*curr_size)
        {
            int mid = min_index(left_index + curr_size - 1 , k*N - 1);
            int right_end = min_index(left_index + 2*curr_size - 1 , k*N - 1);

            merge_mass(data, left_index, mid, right_end, k);
        }
    }

    return 0;
}
