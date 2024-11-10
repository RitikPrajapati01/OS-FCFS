#include<stdio.h>
#include<conio.h>
void main(){
char process[3] = {'P1','P2','P3'};
int AT = 0;
int BT[3]= {30,5,5};
int CT[3], TAT[3],WT[3], c=0,k,r,i,j,a,b;
float avg_TAT=0.0, avg_WT=0.0;
clrscr();
for(i = 0;i<=2;i++){
    c+= BT[i];
    CT[i] = c;
}
for(j = 0;j<=2;j++){
     TAT[j]= CT[j]-AT;
}
for(k=0;k<=2;k++){
WT[k] = TAT[k]-BT[k];
}
for(a = 0;a<3;a++){
avg_TAT+= TAT[a];
}
avg_TAT = avg_TAT/3;

for(b = 0;b<3;b++){
avg_WT += WT[b];
}
avg_WT = avg_WT/3;
printf("P \t AT \t BT \t CT \t TAT \t WT\n");
for(r=0;r<3;r++){
printf("%c%d \t %d \t %d \t %d \t %d \t %d\n",process[r],r+1, AT, BT[r],CT[r],TAT[r],WT[r]);
}
printf("Average TAT: %.2f", avg_TAT);
printf("\nAverage WT: %.2f", avg_WT);
getch();
}