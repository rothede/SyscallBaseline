/* System Call Demonstration File.
    This file demonstrates an example system call.
    In short, a message will be printed out to the console and then the pid of the executing
    thread will be retrieved from a system call.  The program will then exit.
*/

#include <iostream>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>

using namespace std;

int main(int argc, char *argv[])
{
  // Print out a welcome message to the user.
  cout << "Hello World.  This is a system call example."  << "\n";
 
  // Now obtain information about the thread id.
  pid_t pid;
  pid = syscall(SYS_getpid);

  // Now print out the id info.
  cout << "The process id is " << pid << "\n";

  // Now get the pid info through a library call.
  pid = getpid();
  cout << "The process id is " << pid << "\n";
}

