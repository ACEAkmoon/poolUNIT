#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	char line[30];
	char line2[30];
	int tmp;

	char smile = 0;
	printf("//////////// %c\n", smile);

	strcpy(line, "ace");
	strcpy(line2, "ACE");

	tmp = strncmp(line, line2, 20);
	if(tmp < 0)
		printf("line > line2\n");
	else if(tmp > 0) 
		printf("line < line2\n");
	else 
		printf("line = line2\n");
	
	char smile2 = 0;
	printf("/////and//// %c\n", smile2);

	char line3[30];
	char line4[30];

	strcpy(line3, "ACE");
	strcpy(line4, "ace");

	tmp = strncmp(line3, line4, 20);
	if(tmp < 0)
		printf("line > line2\n");
	else if(tmp > 0) 
		printf("line < line2\n");
	else 
		printf("line = line2\n");
	
	char smile3 = 0;
	printf("/////and//// %c\n", smile3);
	
	char line5[30];
	char line6[30];

	strcpy(line5, "ACE");
	strcpy(line6, "ACE");

	tmp = strncmp(line5, line6, 20);
	if(tmp < 0)
		printf("line > line2\n");
	else if(tmp > 0) 
		printf("line < line2\n");
	else 
		printf("line = line2\n");
	
	char smile4 = 0;
	printf("//////////// %c\n", smile4);
	return(0);
}