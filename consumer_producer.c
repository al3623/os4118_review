int n;
struct sempahore full = 0;
struct sempahore mutex = 1;
struct semaphore empty = n;

void consumer() {
	do {
		wait(full);
		wait(mutex);
		/* CONSUME FROM BUFFER */
		signal(mutex);
		signal(empty);
	} while (true);
}

void producer() {
	do {
		wait(empty);
		wait(mutex);
		/* PRODUCE TO BUFFER */
		signal(mutex);
		signal(full);
	} while (true);
}
