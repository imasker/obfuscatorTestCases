/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/4086.c
 * Seed:      772488872
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[8][8][1] = {{{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}}};
static int32_t g_4[4][5][2] = {{{(-1L),3L},{(-1L),(-1L)},{(-1L),3L},{(-1L),(-1L)},{(-1L),3L}},{{(-1L),(-1L)},{(-1L),3L},{(-1L),(-1L)},{(-1L),3L},{(-1L),(-1L)}},{{(-1L),3L},{(-1L),(-1L)},{(-1L),3L},{(-1L),(-1L)},{(-1L),3L}},{{(-1L),(-1L)},{(-1L),3L},{(-1L),(-1L)},{(-1L),3L},{(-1L),(-1L)}}};


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2 g_4
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_3 = &g_4[0][4][0];
    g_2[4][0][0] = (0L <= (-7L));
    (*l_3) = 1L;
    return g_2[4][0][0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 1

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

