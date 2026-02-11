#include <stdio.h>

int main(void) {
    int n;
    char s[100];
    int cnt = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a[26] = { 0 };
        int flag = 1;

        scanf("%s", s);
        for (int j = 0; s[j]!='\0'; j++) {
            int idx = s[j] - 'a';

            if (a[idx] && s[j] != s[j - 1]) {
                flag = 0;
                break;
            }
            a[idx] = 1;
        }
        if (flag > 0) cnt++;
    }

    printf("%d", cnt);
    return 0;
}
