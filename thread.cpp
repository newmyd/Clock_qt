#include "thread.h"

Thread::Thread()
{
    //
}

void Thread::run()
{
    for (; ; usleep(100))
        emit showtim(0);
    return ;
}
