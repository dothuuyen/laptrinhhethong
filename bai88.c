#include<stdio.h>
#include<stdlib.h>
int main(){
char *a=(char *)malloc(1000*sizeof(char));
printf("nhap vao duong dan file can xoa :\n");
scanf("%s", a);
if(remove(a)==0){
printf("xoa thanh cong\n");
}
else{
printf("khong the xoa \n");
}
return 0;
}

 




























