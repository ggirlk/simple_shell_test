#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * hsh_cd - builtin command: change directory.
 * @args: List of args.  args[0] is "cd".  args[1] is the directory.
 * Return: Always returns 1, to continue executing.
 */
int hsh_cd(char **args)
{
if (args[1] == NULL)
{
write(STDOUT_FILENO, "hsh: expected argument to \"cd\"\n", 34);
}
else
{
if (chdir(args[1]) != 0)
{
perror("lsh");
}
}
return (1);
}
