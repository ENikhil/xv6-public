#include "stat.h"
#include "fs.h"
#include "user.h"
#include "types.h"

int main(int argc, char *argv[])
{
	int status = 0, pid;
	int x, y;
	for(int i=0; i<7; i++){
	pid = fork();
	if(pid == 0)
	{
		for(volatile int k = 0; k<100000000; k++)
			k = k + 1;
	}
	else
	{
		status = waitx(&x, &y);
		printf(1, "Status: %d\nRun Time: %d\nWait Time: %d\n", status, y, x);
	}
	}
//	printf(1, "Status: %d\nRun Time: %d\nWait Time: %d\n", status, y, x);
	exit();
}
