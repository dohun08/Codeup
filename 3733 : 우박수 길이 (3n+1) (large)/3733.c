#include <stdio.h>

long long int d[10000001] = {0};  // 전역 배열 초기화, 계산된 값을 저장

long long int f(long long int n) {
    if (n == 1) {
        return 1;  // 1에 도달하면 1을 반환
    }
    if (n < 10000001 && d[n] != 0) {
        return d[n];  // 이미 계산된 값이 있으면 그 값을 반환
    }
    long long int result;
    if (n % 2 == 0) {
        result = 1 + f(n / 2);
    } else {
        result = 1 + f(3 * n + 1);
    }
    if (n < 10000001) {
        d[n] = result;  // 계산된 값을 배열에 저장
    }
    return result;
}

int main() {
    long long int m = 0;
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int maxIndex = a;

    for (long long int i = a; i <= b; i++) {
        long long int count = f(i);
        if (count > m) {
            m = count;
            maxIndex = i;
        }
    }

    printf("%lld %lld", maxIndex, m);
    return 0;
}
