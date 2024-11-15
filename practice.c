/* A. Add
time limit per test1 second
memory limit per test64 megabytes
Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value. */

/* #include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", sum(x, y));

    return 0;
}
 */

// practice 2 Swap
/* E. Swap
time limit per test1 second
memory limit per test64 megabytes
Given two numbers X and Y. Print X and Y after swapping them.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print X and Y separated by a space after swapping. */

/* #include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
} */

// practice 3

/* A. Print Recursion
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print "I love Recursion" N
 times.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤100)
 .

Output
Print "I love Recursion" N
 times. */

/* #include <stdio.h>
void fun(int n)
{
    if (n <= 0) {
        return;
    }

    printf("I love Recursion\n");
    fun(n - 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    fun(N);
    return 0;
} */

// practice 4

/* B. Print from 1 to N
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above. */

/* #include <stdio.h>
void fun(int n)
{
    if (n <= 0) {
        return;
    }
    fun(n - 1);
     printf("%d\n",n);
}

int main()
{
    int N;
    scanf("%d", &N);
    fun(N);
    return 0;
} */

// practice 5

/* C. Print from N to 1
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space. */
/*
#include <stdio.h>

void fun(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d", n);
    if (n > 1) {
        printf(" ");
    }
    fun(n - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    fun(N);
    printf("\n");
    return 0;
}
 */

// factorial

/* #include <stdio.h>

long long makeFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * makeFactorial(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", makeFactorial(n));
    return 0;
} */

// digit print

/* #include <stdio.h>

void printDigits(int n)
{

    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    printDigits(n / 10);
    printf("%d ", digit);
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        printDigits(n);
        printf("\n");
    }
}
 */



// palindrome array
/* 
#include <stdio.h>

int isPalindrom(int *a, int i, int j)
{
    if (i > j)
    {
        return 1;
    }
    return a[i] == a[j] && isPalindrom(a, i + 1, j - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    isPalindrom(a, 0, n - 1);
    if (isPalindrom(a, 0, n - 1))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
 */
