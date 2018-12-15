/*
 * MUTUAL EXCLUSION
 * PROGRESS
 * BOUNDED WAITING
 */

int main() {
	/* SHARED */
	boolean lock = false;
	boolean waiting[n];

	do {
		boolean key = true;
		waiting[i] = true;

		while (waiting[i] && key) {
			key = test_and_set(&lock);
		}
		waiting[i] = false;
		/* CRITICAL SECTION */

		j = (i + 1) % n;
		while ((j != n) && !waiting[j])
			j = (j + 1) % n;
		
		if (i == j)
			lock = false;
		else
			waiting[j] = false;

		/* REMAINDER SECTION */
	} while (true);
}
