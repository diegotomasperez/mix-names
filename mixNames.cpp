#include <stdio.h>
#include <string.h>

int main( int argc, const char* argv[] )
{
	char *strs[] = {"j","je", "sus", "jes", "edu", "ardo", "edua", "cor","dova","cordo", "lait","herz"};
	char *strs2[] = {"d", "die", "ego", "to", "tom","mas","per","rez","ez"};
	
	int i;
	int j;
	char nombre[20];
	
	FILE *f = fopen("names.txt", "w");
	if (f == NULL)
	{
	    printf("Error opening file!\n");
	    return 0;
	}
	
	// Prints each argument on the command line.
	for(i = 0; i < 12; i++ )
	{
		for(j = 0; j < 9; j++){

			fprintf(f, "%s%s\n", strs[i], strs2[j]);
		}	
	}
	
	for(i = 0; i < 9; i++ )
	{
		for(j = 0; j < 12; j++){

			fprintf(f, "%s%s\n", strs2[i], strs[j]);
		}	
	}
	
	fclose(f);
}
