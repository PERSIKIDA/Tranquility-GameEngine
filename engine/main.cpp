#include "engine.h"
#include "game.h"
#include "mpi.h"

extern void RelocateSM();

int main(int argc, char **argv)
{
    initing = INIT_RESET;
   
    initing = NOT_INITING;
    return EXIT_FAILURE;

    #if defined(WIN32) && !defined(_DEBUG) && !defined(__GNUC__)
    } __except(stackdumper(0, GetExceptionInformation()), EXCEPTION_CONTINUE_SEARCH) { return 0; }
    #endif
}
