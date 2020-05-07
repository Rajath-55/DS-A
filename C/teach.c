#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // your code goes here
    int t;

    scanf("%d", &t);
    while (t--)
    {
        int n, q;
        char c[100000];
        scanf("%d%d", &n, &q);
        scanf("%s", c);
        while (q--)
        {
            long int co;
            scanf("%ld", &co);
            int length = strlen(c);
            int counts[26] = {0};
            long int res = 0;
            for (int i = 0; i < length; ++i)
            {
                counts[c[i] - 'a'] += 1;
            }
            // for(int i=0;i<26;++i){
            //     printf("%d ", counts[i]);
            // }
            for (int i = 0; i < 26; ++i)
            {
                if (counts[i] > 1)
                {
                    res += (counts[i] - co > 0 ? counts[i] - co : 0);
                }
            }
            printf("%ld\n", res);
        }
    }
    return 0;
}
