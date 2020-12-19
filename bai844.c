#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
int main()
{
char *a=(char *)malloc(1000*sizeof(char));
printf("nhap vao ten file:\n");
scanf("%s", a);
struct stat stats;
if(stat(a,&stats)==0)
{
printf("kich thuoc cua file : %ld \n" , stats.st_size);
mode_t permode=stats.st_mode;
printf("User co cac quyen :\n");
if(permode & S_IRUSR) printf("doc\n");
if(permode & S_IWUSR) printf("viet\n");
if(permode & S_IXUSR) printf("thucthi\n");
printf("Group co cac quyen :\n");
if(permode & S_IRGRP) printf("doc\n");
if(permode & S_IWGRP) printf("viet\n");
if(permode & S_IXGRP) printf("thuc thi \n");
printf("nhung nguoi khac co quyen :\n");
if(permode & S_IROTH) printf("doc\n");
if(permode & S_IWOTH) printf("viet\n");
if(permode & S_IXOTH) printf("thuc hien\n");

}
return 0;

}









