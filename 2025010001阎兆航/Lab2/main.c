#include <stdio.h>
#include <windows.h>

long long algorithm1(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        count++;
    }
    return count;
}

long long algorithm2(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            count++;
        }
    }
    return count;
}

long long algorithm3(int n) {
    long long count = 0;
    for (int i = 1; i < n; i *= 2) {
        count++;
    }
    return count;
}

long long algorithm4(int n) {
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j *= 2) {
            count++;
        }
    }
    return count;
}

int main(void)
{
    SetConsoleOutputCP(65001); // Windows解决中文乱码

    int n;
    printf("请输入n的值：");
    scanf("%d", &n);

    printf("algorithm1 执行次数：%lld\n", algorithm1(n));
    printf("algorithm2 执行次数：%lld\n", algorithm2(n));
    printf("algorithm3 执行次数：%lld\n", algorithm3(n));
    printf("algorithm4 执行次数：%lld\n", algorithm4(n));

    return 0;
}

