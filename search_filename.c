#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include <sys/stat.h>
#include<sys/types.h>
#include<string.h> #include<dirent.h>
int main(int argc, char *argv[])
{
DIR *d
struct dirent *dr;
char s[50],s1[50];
if(argc<2)
{
printf("insufficient argument enterb string on command line");
exit(0);
}
d=opendir(".");
while((dr-readdir(d))!=NULL)
{
( strncpy(s,dr->d_name,strlen(argv[1]));
if(strcmp(s,argv[1])==0)
printf("%s\n",dr->d_name);
}
return 0;
}
