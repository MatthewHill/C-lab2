#include <stdlib.h>
#include <stdio.h>
int main()
{
FILE *file;
char *filename = "./matthewHill_foo";
file = fopen(filename, "w");
if (file == NULL) {
	fprintf (stderr, "File %s could not be opened\n", filename);
	exit(1);
}
//fprintf(file, "Hello World!\n");
//fclose(file);
int *buffer;
int i;
int answer;
buffer = malloc( 10 * sizeof(int) );
for (i = 0; i < 10; i++) {
scanf("%d",&answer);
buffer[i] = answer;
}
for (i = 0; i < 10; i++) {
printf(" %d ", buffer[9-i]);
answer = buffer[9-i];

fprintf(file,"%d", answer, answer);
}
fclose(file);
free(buffer);
}