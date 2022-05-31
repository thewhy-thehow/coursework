#include <stdio.h>
#구구단
int main()
{
    int j;
    printf("1이상 9이하의 정수를 입력하시오: ");
    scanf("%d", &j);

    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", j, i, j * i);
    }

    return 0;
}

