#include <threads.h>
#include <stdio.h>

int initThread(void *arg)
{
	thrd_t mythreadid = thrd_current();
	for (int i = 0; i < 3; i++)
	{
		printf("Thread id: %lu, counter: %d, code: %s\n", mythreadid, i, (char *)arg);
	}
	return 0;
}
int main(void)
{
	thrd_t mythread;
	if (thrd_success != thrd_create(&mythread, initThread, "Hello from a thread!"))
	{
		printf("Could not create a thread.\n");
		return 1;
	}
	thrd_join(mythread, NULL);
}
