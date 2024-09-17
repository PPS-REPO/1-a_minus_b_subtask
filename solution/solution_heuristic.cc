#include <algorithm>
#include <cstdio>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", std::max(3, a - b));
    return 0;
}
