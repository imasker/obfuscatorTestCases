/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/6808.c
 * Seed:      803295542
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_2[6] = {1L,2L,1L,1L,2L,1L};
static int32_t g_3 = 0xFA75C19CL;
static int32_t g_4 = 0x5912491EL;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_4 g_2
 * writes: g_3 g_4
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    for (g_3 = 5; (g_3 >= 0); g_3 -= 1)
    { /* block id: 3 */
        for (g_4 = 0; (g_4 <= 5); g_4 += 1)
        { /* block id: 6 */
            int i;
            return g_2[g_4];
        }
    }
    return g_3;
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
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
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
   depth: 1, occurrence: 2
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

