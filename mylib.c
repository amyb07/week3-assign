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

    return NULL;
}
