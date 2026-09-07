#include "mylib.h"
#define NULL ((void*) 0)

int cstrlen(char *str){
    int len=0;

    while(*str != '\0'){
        len++;
        str++;
    }

    return len;
}

char *cstrcpy(char *dest, char *src){
     while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;

}

char *cstrcat(char *dest, char *src){
    while(*dest != '\0'){
        dest++;
    }

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 
    return dest;
}

char *cstrchr(char *str, int c){
    
    while(*str != '\0'){
        if(*str == c){
            return str;
        }
        str++;
    }
    if(c == '\0'){
        return str;
    }

    return NULL;
}

int cstrcmp(char *s1, char *s2){
    while(*s1 != '\0' && *s2 != '\0'){
        if(*s1 != *s2){
            //return s1-s2 subs memory addys
            return *s1-*s2;
        }
        s1++;
        s2++;
    }
    return *s1-*s2;

}
