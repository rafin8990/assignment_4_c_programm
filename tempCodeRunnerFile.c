#include <stdio.h>
void fun(int n)
{
    if (n <= 0) {
        return;
    }
    printf("%d ",n);
    fun(n - 1);
    
}

int main()
{
    int N;
    scanf("%d", &N);
    fun(N);
    return 0;
}