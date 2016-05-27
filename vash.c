
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
//	char *args[] = {
//		"ls", "-l", "/",
//	};
	char **cmd;
	cmd = (char **)malloc(4 * sizeof(char *));
	cmd[0] = (char *)malloc(strlen("ls"));
	cmd[1] = (char *)malloc(strlen("-l"));
	cmd[2] = (char *)malloc(strlen("/"));
	cmd[3] = (char *)malloc(strlen(""));
	//strncpy(cmd[0], "ls", strlen("ls"));
	//strncpy(cmd[1], "-l", strlen("-l"));
	//strncpy(cmd[2], "/", strlen("/"));
	//strncpy(cmd[3], "", strlen(""));
	cmd[0] = "ls";
	cmd[1] = "-l";
	cmd[2] = "/";
	cmd[3] = "";
	execlp("ls", "ls", "-l", "/", (char *)0);
	//printf("ret = %d\n", execvp("ls", cmd));
	/* I have no idea on the IDE, but I start it now . */
        printf("hello world\n");
	return 0;
}

