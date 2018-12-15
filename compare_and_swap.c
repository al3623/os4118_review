int compare_and_swap(int *in, int expect, int new) {
	int ret = *in;
	if (*in == expect)
		*in = new;
	return ret;
}
