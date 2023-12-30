To run the code first convert it to an executable files
get -o app app.c (For app.c Program)
get -o fork fork.c(For fork.c Program)


int getpid() - returns the process id (Whenever a process is created, the operating system assigns each process unique id which is known as process id)
int getppid() - returns the parent's process id
pid_t wait(int *status) - Blocks parent until one of it's child process exits. Status returns the termination of child. (wait function returns the pid of terminated child, status returns the termination status of child).
int execl( const char *path, const char*filename, char *const argv[], ......) 
execl is used to execute binary files (1st argument is path of the binary file, 2nd argument is filename of the binary file itself, 3rd argument is all consecutive arguments, and last argument should be NULL - indicating end of argument list).
The execl function never return upon succes whereas it returns -1 on failure.
int exit(int status) - Terminates the calling process and returns to parent process
int fork() - creates a new process by duplicating the calling process. If it is called in parent file it creates a new child file with same set of instructions as same as parent file.
