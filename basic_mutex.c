/* NOTE: CALLS MUST BE DONE ATOMICALLY 
 * Results in busy waiting
 */

void acquire() {
	while (!available);

	available = false;
}

void release(){
	available = true;
}
