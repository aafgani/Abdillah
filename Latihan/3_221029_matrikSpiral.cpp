#include <stdio.h>

void Run3()
{
    int m, n;
    printf("Masukkan m n : ");
    scanf("%d %d", &m, &n);

    // printf("m=%d, n=%d\n", m, n);

    int **bilanganbulat = new int *[n];
    for (int i = 0; i < n; i++)
        bilanganbulat[i] = new int[m];

    // int *bilanganbulat = new int[m, n]; --incorrect
    int counter = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bilanganbulat[i][j] = counter;
            counter++;
            printf("%d ", bilanganbulat[i][j]);
        }
        printf("\n");
    }

    printf("\nOutput : ");
    int xStart = 0, xEnd = m;
    int yStart = 0, yEnd = n;
    int nPrinted = 0;
    while ((xStart != xEnd) && (nPrinted != (m * n)))
    {
        int x1 = xStart, y1 = yStart, y2 = yEnd, step = 0;
        while (step < 2)
        {
            if (step % 2 == 0)
            {
                while (x1 < xEnd)
                {
                    printf("%d ", bilanganbulat[x1][y1]);
                    nPrinted++;
                    x1++;
                }
                y1++;
                while (y1 < y2)
                {
                    printf("%d ", bilanganbulat[x1 - 1][y1]);
                    nPrinted++;
                    y1++;
                }
            }
            else
            {
                while (x1 > xStart)
                {
                    printf("%d ", bilanganbulat[x1 - 1][y1]);
                    nPrinted++;
                    x1--;
                }
                while (y1 > yStart + 1)
                {
                    printf("%d ", bilanganbulat[x1][y1 - 1]);
                    nPrinted++;
                    y1--;
                }
            }
            x1--;
            y1--;
            y2--;
            step++;
        }
        xStart++;
        yStart++;
        xEnd--;
        yEnd--;
    }
}