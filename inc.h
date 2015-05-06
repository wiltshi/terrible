
#undef CARRY

#if !defined(ONES)
#error "Must define ONES"
#endif

#if ONES == 0
#undef ONES
#define ONES 1

#elif ONES == 1
#undef ONES
#define ONES 2

#elif ONES == 2
#undef ONES
#define ONES 3

#elif ONES == 3
#undef ONES
#define ONES 4

#elif ONES == 4
#undef ONES
#define ONES 5

#elif ONES == 5
#undef ONES
#define ONES 6

#elif ONES == 6
#undef ONES
#define ONES 7

#elif ONES == 7
#undef ONES
#define ONES 8

#elif ONES == 8
#undef ONES
#define ONES 9

#elif ONES == 9
#    undef ONES
#    define ONES 0
#    define CARRY
#    if defined(TENS) && (xcat(1,0,TENS) == 10)
#        undef  TENS
#        define TENS 0
#    endif
#endif

#if defined(CARRY)
#undef CARRY

#if !defined(TENS)
#error "Must define TENS"
#endif

#if TENS == 0
#undef TENS
#define TENS 1

#elif TENS == 1
#undef TENS
#define TENS 2

#elif TENS == 2
#undef TENS
#define TENS 3

#elif TENS == 3
#undef TENS
#define TENS 4

#elif TENS == 4
#undef TENS
#define TENS 5

#elif TENS == 5
#undef TENS
#define TENS 6

#elif TENS == 6
#undef TENS
#define TENS 7

#elif TENS == 7
#undef TENS
#define TENS 8

#elif TENS == 8
#undef TENS
#define TENS 9

#elif TENS == 9
#undef TENS
#define TENS 0
#define CARRY
#    if defined(HUNDREDS) && (xcat(1,0,HUNDREDS) == 10)
#        undef  HUNDREDS
#        define HUNDREDS 0
#    endif
#endif
#endif

#if defined(CARRY)
#undef CARRY

#if !defined(HUNDREDS)
#error "Must define HUNDREDS"
#endif

#if HUNDREDS == 0
#undef HUNDREDS
#define HUNDREDS 1

#elif HUNDREDS == 1
#undef HUNDREDS
#define HUNDREDS 2

#elif HUNDREDS == 2
#undef HUNDREDS
#define HUNDREDS 3

#elif HUNDREDS == 3
#undef HUNDREDS
#define HUNDREDS 4

#elif HUNDREDS == 4
#undef HUNDREDS
#define HUNDREDS 5

#elif HUNDREDS == 5
#undef HUNDREDS
#define HUNDREDS 6

#elif HUNDREDS == 6
#undef HUNDREDS
#define HUNDREDS 7

#elif HUNDREDS == 7
#undef HUNDREDS
#define HUNDREDS 8

#elif HUNDREDS == 8
#undef HUNDREDS
#define HUNDREDS 9

#elif HUNDREDS == 9
#error "Overflow"
#endif
#endif

