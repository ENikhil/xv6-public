#include "fcntl.h"
#include "user.h"
#include "stat.h"
#include "types.h"

int main(int argc, char *argv[])
{
	int pid;
	int priority;
	pid = atoi(argv[1]);
	priority = atoi(argv[2]);
	set_priority(pid, priority);
	exit();
}
