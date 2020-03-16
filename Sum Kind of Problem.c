#include <stdio.h>
#include <stdlib.h>
void main(){
int a;

scanf("%d", &a);

for (int i = 1; i <= a; i++) {
         int s1=0;
         int counts1=0;
         int finals1=0;
         int finals2=0;
         int finals3=0;
         int s2=0;
         int counts2=0;
         int s3=0;
         int counts3=0;
        int b,c;
scanf("%d", &c);

scanf("%d", &b);

         for (int j = 1; j <= 20000; j++) {
            s1+=j;
            counts1+=1;
            if (counts1==b) {
                     finals1=s1;
                 }
            if (j%2==1) {
                 s2+=j;
                 counts2+=1;
                 if (counts2==b) {
                     finals2=s2;
                 }
             }
             else if (j%2==0) {
                 s3+=j;
                 counts3+=1;
                 if (counts3==b) {
                     finals3=s3;
                 }
             }
            if (finals1!=0 && finals2!=0 && finals3!=0){
            break;
            }
         }

         printf("%d %d %d %d\n",i, finals1, finals2, finals3) ;

}}
