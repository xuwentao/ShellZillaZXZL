#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>

int main()
{
	char command;
	printf("\tWelcome to ShellZilla System Shell. \n");
	while(command != "exit")
	{
		if(command == "cd"){
			system("cd");	
		}else if(command == "vim"){
			system("vim");
		}else if(command == "ls"){
			system("ls");
		}else if(command == "date"){
			system("date");
		}

		printf("[ShellZilla --> ]");
		scanf("%s", command);
	}
	return 0;
}
