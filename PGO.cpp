#include <random>

const int LENGTH = 110000000;

typedef struct {
	long len;
	double *data;
} my_vector;

long my_vector_len(my_vector *v) {
	return v->len;
}

void foo_bar(my_vector *v, double *res)
{
	long i;
	*res = 1;
	for (i = 0; i < my_vector_len(v); i++) {
		*res *= v->data[i];
	}
}

double a[LENGTH];
my_vector v = { LENGTH, a };

int main() {
	double res;
	for (int i = 0; i < LENGTH; i++)
		a[i] = rand();

	foo_bar(&v, &res);
}
