int main() {
	/* SHARED */
	boolean waiting[n];
	int lock = 0;

	do {
		boolean key = true;
		waiting[i] = true;
		while (waiting[i] && key) {
			key = test_and_set(&lock, 0, 1);
		}	
		waiting[i] = false;

		/* CRITICAL SECTION */

		int j = (i + 1) % n;

		while (i != j && !waiting[j]) {
			j = (j + 1) % n;
		}

		if (i == j)
			lock = 0;
		else
			waiting[j] = false;
		/* REMAINDER SECTION */
	} while (true);
}
