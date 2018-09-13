#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef int Number;

Number randNum()
{
	return rand()%100;
}

int main(int argc, char *argv[])
{
	int i, N = atoi(argv[1]);
	float m1 = 0.0, m2 = 0.0;
	Number x;
	time_t t;
	srand((unsigned)time(&t));
	for (i = 0; i < N; i++) {
		x = randNum();
		m1 += ((float)x) / N;
		m2 += ((float)x*x) / N;
	}
	double m = m2 - m1 * m1;
	printf("   Average: %f\n", m1);
	printf("Std.deviation: %f\n", sqrt(m));
    return 0;
}
