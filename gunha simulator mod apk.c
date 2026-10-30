#include<stdio.h>
#include<string.h>
int main(){
    char input[100];
    printf("enter 'hello' to exit the software\n");
    scanf("%s", input);
    if(strcmp(input, "hello") == 0){
        printf("exiting software...\n");
    }
    return 0;
}