/* Useful when it's easy to see which processes only read/write
 * Useful when there's more readers than writers
 */

struct semaphore rw_mutex = 1;
struct semaphore mutex = 1;
int read_count = 0;

void reader() {
	do {
		wait(mutex);
		read_count++;
		if (read_count == 1) {
			wait(rw_mutex);
		}
		signal(mutex);

		/* READ */

		wait(mutex);
		read_count--;
		if (read_count == 0) {
			signal(rw_mutex);
		}
		signal(mutex);
	} while (true);
}

void writer() {
	do {
		wait(rw_mutex);
		/* WRITE */
		signal(rw_mutex);
	} while (true);
}
