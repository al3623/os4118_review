/* MUST BE EXECUTED ATOMICALLY 
 * Busy waiting still present
 */

S = number of resources available;

void wait(S) {
	while (S <= 0);

	S--;
}

void signal(S) {
	S++;
}
