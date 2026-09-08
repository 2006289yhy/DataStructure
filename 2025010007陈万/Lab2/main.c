#include <stdio.h>

// 第1题：单层循环 O(n)
long long algorithm1(int n)
{
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        count++;
    }
    return count;
}

// 第2题：嵌套i<=i，求和 n(n+1)/2  O(n²)
long long algorithm2(int n)
{
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            count++;
        }
    }
    return count;
}

// 第3题：i *=2 倍增循环 O(logn)
long long algorithm3(int n)
{
    long long count = 0;
    for (int i = 1; i < n; i *= 2)
    {
        count++;
    }
    return count;
}

//第4题：外层n次，内层倍增，O(n log n)
long long algorithm4(int n)
{
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j *= 2)
        {
            count++;
        }
    }
    return count;
}


int main(void)
{
    //测试，n取8（2^3，k=3），方便看对数
    int n=2048;
    printf("n = %d\n", n);
    printf("algorithm1 count = %lld\n", algorithm1(n));
    printf("algorithm2 count = %lld\n", algorithm2(n));
    printf("algorithm3 count = %lld\n", algorithm3(n));
    printf("algorithm4 count = %lld\n", algorithm4(n));

    return 0;
}
