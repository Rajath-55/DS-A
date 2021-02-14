#include <stdio.h>
int n;
struct date
{
    int dd;
    int mm;
    int yy;
};
struct tme
{
    int hour;
    int min;
    int sec;
};
struct timestamp
{
    struct date dt;
    struct tme tme;
};

void Sort_Tokens(int n, struct timestamp arr[n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].dt.yy > arr[j].dt.yy)
            {
                struct timestamp p;
                p = arr[i];
                arr[i] = arr[j];
                arr[j] = p;
                continue;
            }
            if (arr[i].dt.yy == arr[j].dt.yy)
            {
                if (arr[i].dt.mm > arr[j].dt.mm)
                {
                    struct timestamp p;
                    p = arr[i];
                    arr[i] = arr[j];
                    arr[j] = p;
                    continue;
                }
                if (arr[i].dt.mm == arr[j].dt.mm)
                {
                    if (arr[i].dt.dd > arr[j].dt.dd)
                    {
                        struct timestamp p;
                        p = arr[i];
                        arr[i] = arr[j];
                        arr[j] = p;
                        continue;
                    }
                    if (arr[i].dt.dd == arr[j].dt.dd)
                    {
                        if (arr[i].tme.hour > arr[j].tme.hour)
                        {
                            struct timestamp p;
                            p = arr[i];
                            arr[i] = arr[j];
                            arr[j] = p;
                            continue;
                        }
                        if (arr[i].tme.hour == arr[j].tme.hour)
                        {
                            if (arr[i].tme.min > arr[j].tme.min)
                            {
                                struct timestamp p;
                                p = arr[i];
                                arr[i] = arr[j];
                                arr[j] = p;
                                continue;
                            }
                            if (arr[i].tme.min == arr[j].tme.min)
                            {
                                if (arr[i].tme.sec > arr[j].tme.sec)
                                {
                                    struct timestamp p;
                                    p = arr[i];
                                    arr[i] = arr[j];
                                    arr[j] = p;
                                    continue;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void read(struct timestamp *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d", &arr[i].dt.dd, &arr[i].dt.mm, &arr[i].dt.yy, &arr[i].tme.hour, &arr[i].tme.min, &arr[i].tme.sec);
    }
}
void print(struct timestamp *arr)
{
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d %d %d %d\n", arr[i].dt.dd, arr[i].dt.mm, arr[i].dt.yy, arr[i].tme.hour, arr[i].tme.min, arr[i].tme.sec);
    }
}

int main()
{
    scanf("%d", &n);
    struct timestamp arr[n];
    read(arr);
    Sort_Tokens(n, arr);
    print(arr);
    return 0;
}