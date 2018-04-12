#include <stdio.h>
#include <stdlib.h>

int cmdHelp(void)
{
	printf("*********************** help ***************************\n"
		    "*\tThis menu program is coded by one\t\t*\n"
		    "*\t\t\t\t\t\t\t*\n"
			"*\thelp\t\tShow this help list\t\t*\n"
			"*\tls\t\tList files\t\t\t*\n"
			"*\tps\t\tList all process status\t\t*\n"
			"*\tpwd\t\tPrint working directory\t\t*\n"
			"*\tdate\t\tPrint the code of menu.c\t*\n"
			"*\thello\t\tSay hello\t\t\t*\n"
			"*\tquit\t\tQuit menu program\t\t*\n"
			"*\t\t\t\t\t\t\t*\n"
			);
	return 0;
}

int printCode()
{
	char c;
	FILE *fp = NULL;
	fp = fopen("main.c", "r");
	if(NULL == fp)
	{
		printf("Error:main.c does not exist!\n");
		return -1;
	}
	while(fscanf(fp, "%c", &c) != EOF)
		printf("%c", c);
	fclose(fp);
	fp = NULL;
	return 0;
}

int printHello()
{
	printf("Hello, shiyanlou!\n");
	return 0;
}


int main()
{
	char cmd[128];
	while(1)
	{
		printf(">>");
		scanf("%s", cmd);
		if(strcmp(cmd, "help") == 0)
		{
			cmdHelp();
		}
		else if(strcmp(cmd, "ls") == 0)
		{
			system(cmd);	
		}
		else if(strcmp(cmd, "pwd") == 0)
		{
			system(cmd);		
		}
		else if(strcmp(cmd, "ps") == 0)
		{
			system(cmd);
		}
		else if(strcmp(cmd, "date") == 0)
		{
			system(cmd);
		}
		else if(strcmp(cmd, "hello") == 0)
		{
			printHello();	
		}
		else if(strcmp(cmd, "code") == 0)
		{
			printCode();
		}
		else if(strcmp(cmd, "quit") == 0)
		{
			exit(0);
		}
		else
		{
			printf("Unsupport command, you can use 'help' to get help.");
		}
	}
	return 0;
}
