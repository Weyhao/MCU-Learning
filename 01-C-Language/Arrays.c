#include <stdio.h>

int main() {
    // ================== 1. 数组求和 ==================
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf(" 数组求和结果: %d\n", sum);

    // ================== 2. 数组反转 ==================
    int reversed[5];
    for (int i = 0; i < 5; i++) {
        reversed[i] = arr[4 - i];
    }
    printf(" 数组反转结果: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    // ================== 3. 字符串统计 ==================
    char str[6] = "Hello";  // 最后一个 \0 自动补上
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf(" 字符串 \"%s\" 的长度是: %d\n", str, length);
// ================== 4. 统计某字符出现次数 ==================
    char target;
    int count = 0;
    printf("请输入要统计的字符: ");
    scanf(" %c", &target);  // 前面加空格防止换行符被读取
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    printf(" 字符 '%c' 在 \"%s\" 中出现了 %d 次\n", target, str, count);

    return 0;
}