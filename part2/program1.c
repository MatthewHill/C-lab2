#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *file;
char *filename = "./matthewHill_foo";
file = fopen(filename, "w");
if (file == NULL) {
	fprintf (stderr, "File %s could not be opened\n", filename);
	exit(1);
}
fprintf(file, "Hello World!\n");
fclose(file);
}
