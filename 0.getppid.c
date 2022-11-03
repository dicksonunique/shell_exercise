#include <unistd.h>
#include <stdio.h>
/**
* main - Entrance of the code
*
*Return: pid
*/

int main(void)
{
	pid_t my_pid, my_ppid;

	my_pid = getpid();
	printf("pid = %u\n", my_pid);
	my_ppid = getppid();
	printf("ppid = %u\n", my_ppid);
	return (0);
}
