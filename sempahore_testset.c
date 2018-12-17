
struct semaphore = {
	struct wait_queue queue;
	int value;
};

void wait(S) {
	while(test_and_set(&value_lock));
	S->value--;
	if (S->value < 0) {
		S->wait_queue.add(current);
		value_lock = 0;
		block();
	} else {
		value_lock = 0;
	}
}

void signal(S) {
	while(test_and_set(&value_lock));
	S->value++;
	if (S->value <= 0) {
		P = S->wait_queue.dequeue();
		value_lock = 0;
		wake(P);
	} else {
		value_lock = 0;
	}
}
