#include <stddef.h>
int mystrlen(char *s) {
    char *sp = s;
    while(*sp) {
        sp++;
    }

    return sp-s;
}
char * mystrncpy(char *dest, char*source, int n) {
    int i;
    for(i = 0; i < n; i++) {
        dest[i] = source[i];
    }

    return dest;
}
char * mystrcpy(char *dest, char*source) {
    char *i;
    char *j = dest;
    for(i = source; *i; j++,i++) {
        *j = *i;
    }
    *j = 0;

    return dest;
}
char * mystrncat(char *dest, char *source, int n) {
    int i = mystrlen(dest);
    int d_len;
    for(d_len = 0; d_len < n; d_len++) {
        dest[i++] = source[d_len];
    }
    dest[i] = 0;

    return dest;
}
char * mystrcat(char *dest, char *source) {
    int i = mystrlen(dest);
    char* sp;
    for(sp = source; *sp; sp++) {
        dest[i++] = *sp;
    }
    dest[i] = 0;

    return dest;
}
int mystrcmp(char *s1, char *s2) {
    int i = 0;
    while(s1[i] == s2[i]) {
        if(s1[i] == 0) {
            return 0;
        }
        i++;
    }

    return s1[i] - s2[i];
}
char * mystrchr(char *s, char c) {
    char *i;
    for(i = s; *i; i++) {
        if(*i == c) {
            return i;
        }
    }
    if(*i == c) {
        return i;
    }

    return NULL;
}

char * mystrstr(char *s1, char *s2) {
    int i,j;
    char works;
    for(i = 0; s1[i]; i++) {
        works = 1;
        for(j = 0; s1[i+j] && s2[j]; j++) {
            if(s1[i+j] != s2[j]) {
                works = 0;
                break;
            }
        }
        if(works && s2[j] == 0) {
            return s1+i;
        }
    }

    return NULL;
}

