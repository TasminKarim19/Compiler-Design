#include<stdio.h>
#include<string.h>

int main(){

char str[100];

int i;

gets(str);

int len = strlen(str);

if(str[0]=='/' && str[1]=='/')
    printf( "Single Line Comment!");
else if (str[0]=='/'&& str[1]=='*' && str[len-2]=='*'&& str[len-1]=='/')
    printf("Multiline Comment!");
else
    printf("Not a comment!");


return 0;

}
