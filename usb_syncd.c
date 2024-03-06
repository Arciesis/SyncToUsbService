#include <unistd.h>
#include <stdio.h>

int main (int argc, char* argv[]) {
    // change to the "/" directory
    int nochdir = 0;

    // redirect standard input, output and error to /dev/null
    // this is equivalent to "closing the file descriptors"
    int noclose = 0;

    if(daemon(nochdir, noclose))
    perror("daemon");

    sleep(60);

    return 0;
}
