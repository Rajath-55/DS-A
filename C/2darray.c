#include <stdio.h>
int m, n;
void rightshift(int a[m][n], int posx, int posy, int value)
{
    for (int i = m - 1; i >= posx; --i)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == m - 1 && j == n - 1)
            {
                continue;
            }
            if (i > posx || j >= posy)
            {
                if (j != n - 1)
                {
                    a[i][j + 1] = a[i][j];
                }
                else
                {
                    a[i + 1][0] = a[i][j];
                }
            }
        }
    }
    a[posx][posy] = value;
}

void leftshift(int a[m][n], int posx, int posy, int value)
{
    for (int i = 0; i <= posx; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i < posx && j < posy)
            {
                if (j != n - 1)
                {
                    a[i][j] = a[i][j + 1];
                }
                else
                {
                    a[i][j] = a[i + 1][0];
                }
            }
        }
    }
    a[posx][posy] = value;
}
void print(int a[m][n])
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            a[i][j] = 0;
        }
    }
    int phase = 1;
    while (1)
    {
        int p;
        scanf("%d", &p);
        int placed = 0;
        if (p == 0)
            break;
        if (phase == 1 && placed == 0)
        {
            for (int i = 0; i < m && placed == 0; ++i)
            {
                for (int j = 0; j < n && placed == 0; ++j)
                {
                    if (p < a[i][j] || a[i][j] == 0)
                    {
                        rightshift(a, i, j, p);
                        placed = 1;
                        break;
                    }
                }
            }
        }
        if (a[m - 1][n - 1])
            phase = 2;

        if (phase == 2 &&placed == 0)
        {
            for (int i = 0; i < m && placed == 0; ++i)
            {
                for (int j = 0; j < n && placed == 0; ++j)
                {
                    if (a[i][j] > p)
                    {
                        if (j != 0)
                        {
                            leftshift(a, i, j - 1, p);
                            placed = 1;
                            break;
                        }
                        else if (i != 0)
                        {
                            leftshift(a, i - 1, j, p);
                            placed = 1;
                            break;
                        }
                        else
                        {
                            leftshift(a, 0, 0, p);
                            placed = 1;
                            break;
                        }
                    }
                }
            }
        }
        if (placed == 0)
        {
            leftshift(a,m-1,n-1,p);
            placed=1;
        }
        print(a);
        printf("\n");
    }
}