/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/8925.c
 * Seed:      3244500982
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   const uint8_t  f0;
   const int32_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0x32FD2D1AL;
static volatile uint16_t g_4[2] = {0xE76DL,0xE76DL};


/* --- FORWARD DECLARATIONS --- */
static const uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_4
 * writes: g_3 g_4
 */
static const uint32_t  func_1(void)
{ /* block id: 0 */
    int64_t l_2[6] = {(-3L),0x3303773672D714F9LL,0x3303773672D714F9LL,(-3L),0x3303773672D714F9LL,0x3303773672D714F9LL};
    int i;
    for (g_3 = 5; (g_3 >= 1); g_3 -= 1)
    { /* block id: 3 */
        int i;
        g_4[0] &= 0x78C38EC3L;
        if (l_2[g_3])
            break;
        return g_4[0];
    }
    return l_2[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

