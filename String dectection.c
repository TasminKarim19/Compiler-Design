#include<stdio.h>
#include<string.h>
int main(){

char str[50];

gets(str);

int len = strlen(str);
int i,j =0,k,c =0, arr[len];

for(i=0;i<len; ++i){

    if(str[i] =='"'){
        c++;
        arr[j]= i;
        j++;
    }
}

if(c ==0){
    printf("There is no string");
}else if(c == 2){

for(k =arr[0];k<=arr[1]; k++){
    printf("%c",str[k]);
}
}
else{
 printf("There is an compiler error");

}
return 0;
}
