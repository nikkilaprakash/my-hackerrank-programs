#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void inorder(char ch[],int l,int h){
    if(h-l==2)printf("%c%c%c",ch[l],ch[h],ch[l+1]);
    else{
        int m=(l+h)/2;
        inorder(ch,l,m-1);
        printf("%c",ch[h]);
        inorder(ch,m,h-1);
    }
}
int main() {
    char ch[1005];
    scanf("%s",ch);
    int n=strlen(ch);
    inorder(ch,0,n-1);
    return 0;
}