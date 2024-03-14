#include <stdio.h>

#define	IN_WORD		1U
#define	OUT_WORD	0U

int main(void)
{
	int c = '\0';
	unsigned int status = OUT_WORD;
	long character_count = 0L;
	long line_count = 0L;
	long word_count = 0L;

	while ((c = getchar()) != EOF) {
		++character_count;

		if (c == '\n')
			++line_count;
		else
			;

		if (c == ' ' || c == '\t' || c == '\n')
			status = OUT_WORD;
		else
			if (status == OUT_WORD) {
				status = IN_WORD;
				++word_count;
			}
			else
				;
	}

	printf("The number of Character(s) = %ld\n", character_count);
	printf("The number of Word(s) = %ld\n", word_count);
	printf("The number of Line(s) = %ld\n", line_count);

	return 0;
}
