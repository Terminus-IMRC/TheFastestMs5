#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <sys/time.h>

int main()
{
	int_fast32_t count;
	struct timeval start, end;

	gettimeofday(&start, NULL);
	/* It's obvious. */
	count = 275305224;
	gettimeofday(&end, NULL);

	printf("count: %" PRIdFAST32 "\n", count);
	printf("time: %f\n", (end.tv_sec + end.tv_usec * 1e-6) - (start.tv_sec + start.tv_usec * 1e-6));

	return 0;
}
