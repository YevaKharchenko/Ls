#include "libmx.h"

int mx_strlen(const char *s) {
    int cnt = 0;
    if (s == NULL)
        return 0;

    for ( ; *s++ != '\0'; cnt++);
    return cnt;
}
