#include<stdio.h>
#include<stdlib.h>
int main(){
char *a=(char *)malloc(1000*sizeof(char));
printf("nhap file muon dinh huong lai loi ra :\n");
scanf("%s",a);
char *b=(char *)malloc(1000*sizeof(char));
printf("nhap file dich:\n");
scanf("%s", b);
FILE *file, *file1;
file=fopen("vd.txt", "r");
file1=fopen("vidu.doc", "w");
char *c=(char *)malloc(1000*sizeof(char));
fread(c,1000,1,file);
fwrite(c,1000,1,file1);
fclose(file);
fclose(file1);
return 0;
}









