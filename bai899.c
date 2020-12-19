#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc , char *argv[]){
	char *tutimkiem=(char *)malloc(1000*sizeof(char));
	tutimkiem=argv[1];
	char *filetimkiem=(char *)malloc(1000*sizeof(char));
	filetimkiem=argv[2];
	char *noidungfile=(char *)malloc(1000*sizeof(char));
	FILE *file;
	file=fopen(filetimkiem, "r");
	if(file==NULL)
	{
		printf("file khong ton tai\n");
		exit(0);	
	}
	fread(noidungfile,1,1000,file);
	char *noidungfile1=(char *)malloc(1000*sizeof(char));
	noidungfile1=strtok(noidungfile, "\n");
	while(noidungfile1!=NULL)
	{
		if(strstr(noidungfile1,tutimkiem)>0)
		{
			printf("%s\n" , tutimkiem);
		}

        	noidungfile1=strtok(NULL, "\n");
} 
	return 0;
}










