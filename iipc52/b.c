#include<stdio.h>
#include<string.h>
int main(){
    int a,i,b;
    char str[100];
    scanf("%s",&str);
    scanf("%d %d",&a,&b);
    int x = strlen(str);
    for( i = 0 ; i < x ; i++){
        if(i == a-1){
            printf("%c",str[b-1]);
        }
        else if(i == b-1 ){
            printf("%c",str[a-1]);
        }
        else {
            printf("%c",str[i]);
        }
    }
}
