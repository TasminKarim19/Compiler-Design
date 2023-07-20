#include<stdio.h>
#include<string.h>

int main(){

char str[100];

int i, j, len;
gets(str);

len = strlen(str);

for(i=0; i<len; ++i){

    if(str[i] == ' '){
        for(j=i; j<len; ++j){

            str[j] = str[j+1];
            i-- ;
        }
        len--;
    }
}

puts(str);

return 0;


}


