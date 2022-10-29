#include <stdio.h>
#include <cstdlib>
#include <string>

void Run1()
{
    int m, n;
    printf("Masukkan m n : ");
    scanf("%d %d", &m, &n);

    printf("m=%d, n=%d\n", m, n);

    int counter = 1;
    for (int i = 0; i < m; i++)
    {
        int counter2 = counter - 1;
        for (int j = n; j > 0; j--)
        {
            if (i % 2 == 0)
            {
                printf("%d ", counter);
            }
            else
            {
                printf("%d ", counter2 + j);
            }
            counter++;
        }
        printf("\n");
    }
}