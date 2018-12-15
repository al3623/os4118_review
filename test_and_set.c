boolean test_and_set(boolean *in) {
	boolean ret = *in;
	*in = true;
	return ret;
}
