/*
 * MUTUAL EXCLUSION
 * PROGRESS
 * No bounded waiting 
 */

int main() {
	/* SHARED */
	int lock = 0;
	do {
		while (compare_and_swap(&lock, 0, 1));
		/* CRITICAL SECTION */
		lock = 0;
		/* REMAINDER SECTION */
	} while (true);

