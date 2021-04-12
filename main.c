#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *words[] = { "Cykel", "Abe", "Morten", "Parkering"};
    int n = sizeof(words) / sizeof(words[0]);
    SortWordsAlpha(words, n);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", words[i]);
    }
    printf ("\n");
}

/**< Sortering af ord alhpabetisk */
void SortWordsAlpha(char *words[], int count)
{
    char *x;

    for (int i = 0; i<count; i++)
    {
        for (int j = i + 1; j<count; j++)
        {
            if (strcmp(words[j], words[i]) < 0)
            {
                x = words[j];
                words[j] = words[i];
                words[i] = x;
            }
        }

    }
}
