#include<stdio.h>

int main(){

char str[50];

int c=0;

gets(str);

int len = strlen(str);

for(int i =0; i< len;++i){

    if(str[i] == '/'){
        c++;
    }
}
 printf("'/' found %d",c);
 return 0;
}
