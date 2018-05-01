#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{

 int filedesc = open("matthewHill_foo.txt", O_WRONLY | O_APPEND);
 
int *buffer;
int i;
int answer;
char mybuffer[10];
buffer = malloc( 10 * sizeof(int) );
for (i = 0; i < 10; i++) {
scanf("%d",&answer);
buffer[i] = answer;
}
for (i = 0; i < 10; i++) {
printf(" %d ", buffer[9-i]);
answer = buffer[9-i];
sprintf(mybuffer,"%d",answer);
write(filedesc, mybuffer, 10);
}
close(filedesc);
free(buffer);
}