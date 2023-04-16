#include<stdio.h>
int main()
{
    int c=1;
    for(int i=5;i>=1;i--){
        int num=65;
        printf("A");
        for(int j=i-1;j>=1;j--){
            printf("%c",num+c);
            num=num+c;
        }
        printf("\n");
        count++;
    }
    return 0;
}
