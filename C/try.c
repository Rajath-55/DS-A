#include <stdio.h>

void main()
{
    int A[10] = {4, 9, 6, 12, 2, 8, 6, 3, 1, 7};
    int a = 10, mid, end, B[10], size = 1;

    while (size <= a)
    {
        int i, j, k = 0, start = 0;

        while (start + size <= a)
        {
            mid = start + size;
            end = start + 2 * size - 1;

            if (end >= a)
            {
                end = a - 1;
            }

            i = start;
            j = mid;

            while ((i < mid) && (j <= end))
            {
                if (A[i] <= A[j])
                {
                    B[k++] = A[i++];
                }
                else
                {
                    B[k++] = A[j++];
                }
            }

            while (i < mid)
            {
                B[k++] = A[i++];
            }

            while (j <= end)
            {
                B[k++] = A[j++];
            }
            start = end + 1;
        }

        for (i = start; k < a; i++)
        {
            B[k++] = A[i];
        }

        i = 0;
        while (i < a)
        {
            int temp = A[i];
            A[i] = B[i];
            B[i] = temp;
            i = i + 1;
        }

        size = 2 * size;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", A[i]);
    }
}

Time Complexity - O(a / 2)

                      For merge.c
    -

    void main()
{
    int A[4] = { 2,
                 4,
                 6,
                 8 } int B[5] = {3, 6, 9, 11, 12};
    int a = 4, b = 5;
    int C[10];
    int c = 0;
    int i = 0;
    int j = 0;
    while (i < a && j < b)
    {
        if (A[i] <= B[j])
        {
            C[c] = A[i];
            c = c + 1;
            i = i + 1;
        }
        else
        {
            C[c] = B[j];
            c = c + 1;
            j = j + 1;
        }
    }

    while (i < a)
    {
        C[c] = A[i];
        c = c + 1;
        i = i + 1;
    }

    while (j < b)
    {
        C[c] = B[j];
        b = b + 1;
        j = j + 1;
    }
}
