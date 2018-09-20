#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{	
	pid_t temp = getpid();
	printf("%d\n", temp);
	temp = getppid();
	printf("%d\n", temp);

	system("ps");

	return 0;
}

