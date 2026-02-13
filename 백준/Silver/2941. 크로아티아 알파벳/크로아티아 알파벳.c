#include <stdio.h>

int main(void) {
    char s[100];
    int cnt = 0;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
            i += 2;
            cnt++;
        }
        else if (( s[i] == 's' || s[i] == 'c' || s[i] == 'z' )&& s[i + 1] == '=') {
            i += 1;
            cnt++;
        }
        else if ((s[i] == 'c' || s[i] == 'd') && s[i + 1] == '-') {
            i += 1;
            cnt++;
        }
        else if ((s[i] == 'l' || s[i] == 'n') && s[i + 1] == 'j') {
            i += 1;
            cnt++;
        }
        else {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
