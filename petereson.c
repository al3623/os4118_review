/*
 * BOUNDED WAITING
 * MUTUAL EXCLUSION
 * PROGRESS
 * Only tends to two processes
 */

int main() {
	/* SHARED */
	boolean flag[2];
	int turn;

	do {
		flag[i] = true;
		turn = j;
		while(turn == j && flag[j]);
		
		/* CRITICAL SECTION */

		flag[i] = false;

		/* REMAINDER */
	} while (true);
}
