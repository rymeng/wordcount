#include <stdio.h>

#define	IN_WORD		1U
#define	OUT_WORD	0U

int main(void)
{
	int c = '\0';
	unsigned int status = OUT_WORD;
	long wordcount = 0L;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			status = OUT_WORD;
		else
			if (status == OUT_WORD) {
				status = IN_WORD;
				++wordcount;
			}
			else
				;
	}

	printf("Word Count = %ld\n", wordcount);

	return 0;
}
