/* MUST BE EXECUTED ATOMICALLY */

struct semaphore = {
	struct wait_queue queue;
	int value;
};

void wait(struct semaphore *S) {
	S->value--;
	if (S->value < 0) {
		wait_queue.add(current);
		block();
	}
}

void signal(S) {
	S->value++;
	if (S->value <= 0) {
		P = S->wait_queue.dequeue();
		wake(P);
	}	
}
