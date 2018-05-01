#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
int main()
{
	FILE *file;
	char filename[60];
printf("What file would you like to open?");
scanf("%s", filename);
file = fopen(filename,"r");
 if (file == NULL)
    {
        printf("file non existant: %s", filename);
        return 0;
	}
 //int filedesc = open(filename, O_WRONLY | O_APPEND);
char buffer[128];
char newLine;
char *t1;
int linecount =1;
int wordcount =0;
fread(buffer,1,1000, file);
for(t1 = strtok(buffer," "); t1 !=NULL; t1 = strtok(NULL," "))
{
wordcount++;	
}
fclose(file);
fopen(filename,"r");
  for (newLine = getc(file); newLine != EOF; newLine = getc(file))
  {
        if (newLine == '\n')
		{
            linecount = linecount + 1;
			wordcount++;
		}
  }
 printf("Word count: ");
 printf("%d",wordcount);
 printf("Line count: ");
 printf("%d",linecount);
//close(filedesc);
fclose(file);
}