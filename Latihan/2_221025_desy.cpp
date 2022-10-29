#include <stdio.h>

void Run2()
{
    int m, n;
    printf("Masukkan m : ");
    scanf("%d", &m);

    printf("m=%d\n", m);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("@ ");
            }
            else
            {
                printf("$ ");
            }
        }
        printf("\n");
    }
}