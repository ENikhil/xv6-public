#include "stat.h"
#include "fs.h"
#include "user.h"
#include "types.h"

int main(int argc, char *argv[])
{
	int status = 0, pid;
	int x, y;
	pid = fork();
	if(pid == 0)
	{
		exec(argv[1], argv);
		printf(1, "fork failed by %s\n", argv[1]);
	}
	else
	{
		status = waitx(&x, &y);
	}
	printf(1, "Status: %d\nRun Time: %d\nWait Time: %d\n", status, y, x);
	exit();
}
