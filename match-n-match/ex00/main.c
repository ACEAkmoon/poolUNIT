
#include <stdio.h>

int	match(char *s1, char *s2);

void print(char *s1, char *s2, int bool)
{
	if (bool)
		printf("%s / %s / TRUE \n", s1, s2);
	else
		printf("%s / %s / FALSE \n", s1, s2);
}

int main()
{
	char *a = "";
	char *s = "";
	print(a, s, match(a, s));

	char *d = "";
	char *f = "*";
	print(d, f, match(d, f));

	char *g = "*";
	char *h = "";
	print(g, h, match(g, h));

	char *j = "*";
	char *k = "*";
	print(j, k, match(j, k));

	char *l = "mainc";
	char *q = "";
	print(l, q, match(l, q));

	char *w = "mainc";
	char *e = "*";
	print(w, e, match(w, e));

	char *r = "*";
	char *t = "mainc";
	print(r, t, match(r, t));

	char *y = "main.c";
	char *u = "*.c";
	print(y, u, match(y, u));


///////////////////////////////
	char *a1 = "qwert";
	char *s1 = "qwerty";
	print(a1, s1, match(a1, s1));

	char *d1 = "zX*xlnfVUPR";
	char *f2 = "CZR*pvSVKT*HJoLU";
	print(d1, f2, match(d1, f2));

	char *g1 = "Dfn*LH*Am*";
	char *h1 = "KRMS*N";
	print(g1, h1, match(g1, h1));

	char *j1 = "OKN";
	char *k1 = "ojzPQmvLn";
	print(j1, k1, match(j1, k1));

	char *l1 = "*PME*s*e*IuxvZ";
	char *q1 = "*C*oNvWh*gitLl*";
	print(l1, q1, match(l1, q1));

	char *w1 = "KJ*TB*";
	char *e1 = "GZtc*ew*NVkfT*q";
	print(w1, e1, match(w1, e1));

	char *r1 = "EDBlM*mkoI*";
	char *t1 = "IR*T*Ul**";
	print(r1, t1, match(r1, t1));

	char *y1 = "***B******";
	char *u1 = "**********";
	print(y1, u1, match(y1, u1));


////////////////////////////////
	char *l3 = "*****x*****";
	char *q3 = "****x******";
	print(l3, q3, match(l3, q3));

	char *w3 = "**********";
	char *e3 = "**********";
	print(w3, e3, match(w3, e3));

	char *r3 = "***c**********";
	char *t3 = "*************c";
	print(r3, t3, match(r3, t3));

	char *y3 = "**********";
	char *u3 = "******b***";
	print(y3, u3, match(y3, u3));

	return (0);
}

/*int main()
{
    char s1[] = "mainnn nnnnnn.c";
    char s2[] = "**ai*n*n.c";

    char s3[] = "";
    char s4[] = "abc";

    char s5[] = "";
    char s6[] = "";

    char s7[] = "abc";
    char s8[] = "*";

    char s9[] = "ac";
    char s10[] = "a*c";

    char s11[] = "abcdasad";
    char s12[] = "*b*";

    char s13[] = "1345";
    char s14[] = "1345";

    char s15[] = "13";
    char s16[] = "1345";

    printf("s1 and s2 => %d, TRUE = 1\n", match(s1, s2));
    printf("s3 and s4 => %d, FALSE = 0\n", match(s3, s4));
    printf("s5 and s6 => %d, TRUE = 1\n", match(s5, s6));
    printf("s7 and s8 => %d, TRUE = 1\n", match(s7, s8));
    printf("s9 and s10 => %d, TRUE = 1\n", match(s9, s10));
    printf("s11 and s12 => %d, TRUE = 1\n", match(s11, s12));
    printf("s13 and s14 => %d, TRUE = 1\n", match(s13, s14));
    printf("s15 and s16 => %d, FALSE = 0\n", match(s15, s16));
    return (0);
}*/