#include <stdio.h>
#include <string.h>
int foundVowel(char *c)
{
    int foundvowel = 0;
    int count = 0;
    for (int i = 0; i < strlen(c); ++i)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
        {
            count++;
            foundvowel = 1;
        }
    }
    return foundvowel;
}
void solve(char *c)
{
    int posvowel = -1;
    int pos = -1;
    // int count = 0;
    // int foundvowel = 1;

    for (int i = strlen(c)-1; i >=0; --i)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
        {
            posvowel = i;
            break;
        }
    }
    if (posvowel > 0)
    {

        for (int i = posvowel - 1; i >= 0; i--)
        {
            if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
            {
                pos = i;
                c[i] += 1;
                break;
            }
            else
            {
                c[i] = (c[i] + 1 <= 122 ? c[i] + 1 : c[i]);
            }
        }
    }
    for (int i = (pos >= 0 ? pos+1 : 1); i < strlen(c); ++i)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
        {
            c[i] += 1;
            break;
        }
        else
        {
            c[i] = (c[i] + 1 <= 122 ? c[i] + 1 : c[i]);
        }
    }
}

int main()
{
    char c[100000];
    scanf("%s", c);
    int ifvowel = foundVowel(c);
    
    while(ifvowel){
        solve(c);
        ifvowel=foundVowel(c);
    }

    printf("%s\n", c);
}