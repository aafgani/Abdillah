#include <stdio.h>
#include <cstdlib>

void Run5()
{
    int k, m, n;
    printf("Masukkan k m n : ");
    scanf("%d %d %d", &k, &m, &n);

    printf("k=%d, m=%d, n=%d\n", k, m, n);

    int *bilanganbulat = new int[k];
    for (int j = 0; j < k; j++)
    {
        bilanganbulat[j] = rand() % 10;
        printf("%d ", bilanganbulat[j]);
    }
    printf("\n");

    int counter = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (counter < k)
            {
                printf("%d ", bilanganbulat[counter]);
            }
            else
            {
                printf("0 ");
            }
            counter++;
        }
        printf("\n");
    }
}