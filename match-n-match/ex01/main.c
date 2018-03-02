#include <stdio.h>

int	nmatch(char *s1, char *s2);

void print(char *s1, char *s2, int bool)
{
	printf("%s / %s / %d !\n", s1, s2, bool);
}

int main()
{
	char *a = "abcbd";
	char *s = "*b*";
	print(a, s, nmatch(a, s));

	char *d = "abc";
	char *f = "a**";
	print(d, f, nmatch(d, f));

	char *g = "main.c";
	char *h = "*.c";
	print(g, h, nmatch(g, h));

	char *j = "main.c";
	char *k = "m*d";
	print(j, k, nmatch(j, k));

	char *l = "main.c";
	char *q = "*a*.c";
	print(l, q, nmatch(l, q));

	return (0);
}

/*int    nmatch(char *s1, char *s2);

int main()
{
    char s1[] = "abcbd";
    char s2[] = "*b*";
    char s3[] = "abc";
    char s4[] = "a**";
    printf("%i\n", nmatch(s1, s2));
    printf("%i\n", nmatch(s3, s4));
    return (0);
}*/
