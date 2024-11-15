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
    int t = *x;
    *x = *y;
    *y = t;
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

/* #include <stdio.h>
void swap(int *p, int *q)
{
int t = *p;
*p = *q;
*q = t;
}
int main()
{
int a = 6, b = 5;
swap(&a, &b);
printf("%d %d\n", a, b);
}
 */

/* #include <stdio.h>
void m(int *p)
{
int i = 0;
for (i = 0; i < 5; i++)
printf("%d ", p[i]);
}
int main()
{
int a[5] = {6, 5, 3};
m(a);
} */

/* #include <stdio.h>
void m(int p, int q)
{
int t = p;
p = q;
q = t;
}
int main()
{
int a = 6, b = 5;
m(a, b);
printf("%d %d\n", a, b);
} */

/* #include <stdio.h>
int main()
{
int ary[4] = {1, 2, 3, 4};
printf("%d\n", *ary);
} */

/* #include <stdio.h>
int main()
{
int ary[4] = {1, 2, 3, 4};
int *p;
p = ary + 3;
*p = 5;
printf("%d\n", ary[3]);
} */

// shift zero
/* #include <stdio.h>

void shiftZeros(int a[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j++] = a[i];
        }
    }
    while (j < n)
    {
        a[j++] = 0;
    }
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

    shiftZeros(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
 */

// find the max and min number

/*

#include <stdio.h>
void findMinMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min, max;


    findMinMax(arr, n, &min, &max);

    printf("%d %d\n", min, max);

    return 0;
}
 */

// find the maximum value
/*
#include <stdio.h>
int findMax(int a[], int n) {
    if (n == 1) {
        return a[0];
    }
    int maxInRest = findMax(a, n - 1);
    return (a[n - 1] > maxInRest) ? a[n - 1] : maxInRest;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    int max = findMax(a, n);

    printf("%d\n", max);

    return 0;
}
 */

// count vowels
/*
I. Count Vowels
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S. */

/* #include <stdio.h>
#include <ctype.h>
int countVowels(const char *str, int index, int length) {
    if (index == length) {
        return 0;
    }
    char c = tolower(str[index]);
    int isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    return isVowel + countVowels(str, index + 1, length);
}

int main() {
    char str[201];

    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    int vowelCount = countVowels(str, 0, length);
    printf("%d\n", vowelCount);
    return 0;
}
 */

// log 2

/* #include <stdio.h>
int log2_recursion(long long N) {

    if (N < 2) {
        return 0;
    }
    return 1 + log2_recursion(N / 2);
}
int main() {
    long long N;
    scanf("%lld", &N);
    printf("%d\n", log2_recursion(N));

    return 0;
}
 */

// Solve Visiting Monument using recurtion
/*

//using loop
#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    for (int i = n - 1; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        print_pattern(N);
    }

    return 0;
}
 */

/* #include <stdio.h>

void print_pattern(int n, int a)
{

    if (a < 1)
    {
        return;
    }

    if (a <= n)
    {
        printf("%d ", a);
    }

    print_pattern(n, a + 1);

    if (a < n)
    {
        printf("%d ", a);
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);
        print_pattern(N, 1);
        printf("\n");
    }

    return 0;
} */
/*
#include <stdio.h>

void print_pattern(int n, int a)
{
    if (a < 1)
    {
        return;
    }
    printf("%d ", a);

    if (a < n)
    {
        print_pattern(n, a + 1);
        printf("%d ", a);
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);
        print_pattern(N, 1);
        printf("\n");
    }

    return 0;
}
 */

// problem 2 Jadu matrix
/*
#include <stdio.h>

int main()
{
    int n, m, isJadu = 1;
    int mat[100][100];

    scanf("%d %d", &n, &m);

    if (n != m)
    {
        isJadu = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);

            if (i == j || i + j == n - 1)
            {
                if (mat[i][j] != 1)
                {
                    isJadu = 0;
                }
            }
            else
            {
                if (mat[i][j] != 0)
                {
                    isJadu = 0;
                }
            }
        }
    }

    if (isJadu)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
 */

// problem 3  swap in matrix
/*
#include <stdio.h>

int main() {
    int n, m, t;
    int s[100][100];

    scanf("%d %d", &n, &m);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &s[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        t = s[i][0];
        s[i][0] = s[i][m - 1];
        s[i][m - 1] = t;
    }


    for (int j = 0; j < m; j++) {
        t = s[0][j];
        s[0][j] = s[n - 1][j];
        s[n - 1][j] = t;
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 */


//problem 4 solve : same same but different
/* #include <stdio.h>
#include <string.h>

int main()
{
    char s1[105], s2[105], s3[105];
    int total_operations = 0;

    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    int n = strlen(s1);

    for (int i = 0; i < n; i++)
    {
        int minimum_operation = 1000;

        int num1 = (s2[i] != s1[i]) + (s3[i] != s1[i]);

        int num2 = (s1[i] != s2[i]) + (s3[i] != s2[i]);

        int num3 = (s1[i] != s3[i]) + (s2[i] != s3[i]);

        if (num1 < num2)
        {
            if (num1 < num3)
            {
                minimum_operation = num1;
            }
            else
            {
                minimum_operation = num3;
            }
        }
        else
        {
            if (num2 < num3)
            {
                minimum_operation = num2;
            }
            else
            {
                minimum_operation = num3;
            }
        }

        total_operations += minimum_operation;
    }

    printf("%d\n", total_operations);

    return 0;
}
 */

//problem 5 solve : find the missing number:

/* #include <stdio.h>

int main() {
    long long T;
    long long Total;
    long long A;
    long long B;
    long long C;
    long long missing_number;

    scanf("%lld", &T);
    for (long long i = 0; i < T; i++) {
     
        scanf("%lld %lld %lld %lld", &Total, &A, &B, &C);

        long long multiplication= A * B * C;

        if ((Total % multiplication )== 0) {
            missing_number = Total / multiplication;  
            printf("%lld\n", missing_number);
        } else {
            printf("-1\n"); 
        }
    }
    
    return 0;
}

 */



