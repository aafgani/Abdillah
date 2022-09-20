#include <stdio.h>
#include <cstdlib>

void Latihan4()
{
    int t;
    printf("Masukkan T kasus : ");
    scanf("%d", &t);

    printf("t = %d\n", t);

    for (int i = 0; i < t; i++)
    {
        int n;
        printf("Masukkan n bilangan bulat : ");
        scanf("%d", &n);
        printf("n = %d\n", n);

        int *bilanganbulat = new int[n];
        for (int j = 0; j < n; j++)
        {
            bilanganbulat[j] = rand() % 10;
            printf("%d ", bilanganbulat[j]);
        }
        printf("\n");
        delete[] bilanganbulat;
    }
}
