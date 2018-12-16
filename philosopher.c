struct semaphore chopsticks[n];

void philosopher() {
	do {
		wait(chopsticks[i]);
		wait(chopsticks[(i + 1) % n]);
		/* EAT */
		signal(chopsticks[(i + 1) % n];
		signal(chopsticks[i]);
		/* THINK */
	} while (true);	
}
