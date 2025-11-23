#include <stdio.h>
int add(int a)
{
    if (a <= 1)
        return a;
    else
        return add(a - 1) + add(a - 2);
}
int main()
{
    int input;
    scanf("%d", &input);
    int end = add(input);
    printf("%d", end);
}