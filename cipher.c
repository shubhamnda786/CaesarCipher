#include<stdio.h>
#include<string.h>
#include<math.h>
int dec(char clt[100]);
int enc(char plt[100]) {
    char ct[100];
    int length, i;
    length = strlen(plt);
    printf("The encrypted word is ");
    
    for(i=0; i<length; i++) {
        if(plt[i]>='x' && plt[i]<='z' || plt[i]>='X' && plt[i]<='Z'){
        plt[i]-=26;
        }
        ct[i] = (plt[i] + 3);
        printf("%c",ct[i]);
    }
    printf("\n");
    dec(ct);
    return 0;
}
int dec(char clt[100]) {
    char pnt[100];
    int n, k;
    n = strlen(clt);
    printf("The decrypted word is ");
    for(k=0; k<n; k++) {
        if(clt[k]>='a' && clt[k]<='c' || clt[k]>='A' && clt[k]<='C') {
            clt[k]+=26;
        }
        pnt[k] = (clt[k] - 3);
        printf("%c",pnt[k]);
    }
    return 0;
}
int main() {
   char pt[100];
   printf("enter a word\n");
   scanf("%s",&pt);
   printf("Given word is %s\n",pt);
   enc(pt);
   return 0;
}
