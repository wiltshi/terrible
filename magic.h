#undef X
#define X xcat(HUNDREDS, TENS, ONES)

#undef N

#undef Fizz
#if X % 3 == 0
#define Fizz "Fizz"
#define N
#else
#define Fizz
#endif

#undef Buzz

#if X % 5 == 0
#    define Buzz "Buzz"
#    if !defined(N)
#        define N
#    endif
#else
#define Buzz
#endif

#if !defined N
#define N XSTR(X)
#endif

Fizz Buzz N "\n"

#include "inc.h"

#if X <= STOP
#include "magic.h"
#endif

