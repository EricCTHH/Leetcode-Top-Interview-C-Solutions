#include <stdio.h>
#include <string.h>

int getVal (char c) {
    switch (c) {
        case 'M': return 1000; break;
        case 'D': return 500; break;
        case 'C': return 100; break;
        case 'L': return 50; break;
        case 'X': return 10; break;
        case 'V': return 5; break;
        case 'I': return 1; break;
        default: return -1; break;
    }
}

int romanToInt(char* s) {
    int res = 0;
    int len = strlen(s);

    if (len == 0) {
        return res = 0;
    }

    for (int i = 0; i < len; i++) {
        int cur = getVal(s[i]);
        int next = getVal(s[i+1]);

        if (cur < next) {
            res -= cur;
        }
        else {
            res += cur;
        }
    }
    return res + getVal(s[len - 1]);
}