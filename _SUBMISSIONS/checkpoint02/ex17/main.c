#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *s1 = "A";
	char *s2 = "A";
	char *s3 = "B";
	char *s4 = "C";
	char *s5 = "B";

	printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strcmp(s1, s3));
	printf("Comparing '%s' and '%s': %d\n", s4, s5, ft_strcmp(s4, s5));
	return (0);
}
