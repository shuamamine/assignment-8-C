#include<stdio.h>
int main(
  {
    int c=1,st=69;
    for(int i=1;i<6;i++){
        for(int i=0;i<c;i++){
            printf("%c",97+i);
        }
        int dec=st;
        for(int i=1;i<=6-c;i++){
            printf("%c",dec);
            dec--;
        }
        printf("\n");
        c++;
        st--;
    }
    return 0;
}
