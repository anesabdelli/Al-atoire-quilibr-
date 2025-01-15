#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <fcntl.h>
#include <time.h>
#include <sys/wait.h>

#define MILLIARD 1000000000LL // definire la constante  1 milliard
#define MILLION 1000000LL     // definire la constante  1 million