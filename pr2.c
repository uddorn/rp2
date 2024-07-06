#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP ( 1251 );
    SetConsoleOutputCP ( 1251 );
    int r;
    scanf("%d", &r);

    if (r < 2 || r > 20) {
        printf("Невірні вхідні дані: р має бути в діапазоні від 2 до 20\n");
        return 1;
  }

    int numbers[r];
    for (int i = 0; i < r; i++) {
    scanf("%d", &numbers[i]);
  }

    int nsk = lcm(numbers[0], numbers[1]);
    for (int i = 2; i < r; i++) {
    nsk = lcm(nsk, numbers[i]);
  }

    printf("%d\n", nsk);

    return 0;
}

int gcd_recursive(int a, int b) {
    if (b == 0) {
    return a;
  } else {
    return gcd_recursive(b, a % b);
  }
}

int lcm(int a, int b) {
    return a * b / gcd_recursive(a, b);
}
