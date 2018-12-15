/*
 * MUTUAL EXCLUSION
 * PROGRESS
 * No bounded waiting
 */

int main() {
	/* SHARED */
	boolean lock = false;
	do {
		while(test_and_set(&lock);
		/* CRITICAL SECTION */
		lock = false;
		/* REMAINDER SECTION */
	} while (true);
}
