#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#define sleep(secs) Sleep(1000 * (secs))
#else
#include <unistd.h>
#endif

#define SLEEP_SECS 6

int exit_value = 0;

int main()
{
    int i;

    /* Use loop instead of sleep(SLEEP_SECS) because
     * it may be interrupted on Linux.
     */
    for (i = 0; i < SLEEP_SECS; i++) {
        sleep(1);
		printf("target exit after %i seconds\n", SLEEP_SECS - i);
    }
	printf("exit...\n");
    return exit_value;
}
