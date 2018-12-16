/**/

int main() {
	/* SHARED */
	boolean flag[2];
	int turn;

	do {
		flag[i] = true;

		while (flag[j]) {
			if (turn == j) {
				flag[i] = false;
				while (turn == j);
				flag[i] = true;
			}
		}

		/* CRITICAL SECTION */

		turn = j;
		flag[i] = false;

		/* REMAINDER SECTION */
	} while (true);
}
