#include<stdio.h>
#include<string.h>
int main(){
char a[30];
printf("Enter the string: ");
gets(a);
for(int i=strlen(a);i>=0;i--){
    if(a[i--]=='\0'){
            int j=0;
           char b[strlen(a)];
        while(a[i]!=' '){
            b[j]=a[i];
            if(i<0)
                break;
            i--;
            j++;
        }
        for(int k=strlen(b);k>=0;k--){
            printf("%c",b[k]);
        }
        printf(" ");
        for(int k=strlen(b);k>=0;k--){
            b[k]='\0';
        }
    }
    a[i++]='\0';
}
}
