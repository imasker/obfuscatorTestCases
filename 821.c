/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/821.c
 * Seed:      1216649166
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4[4][5][2] = {{{0x23ED15DEL,0UL},{18446744073709551608UL,0xEAD9BACCL},{0x545EE28FL,18446744073709551615UL},{0x4E94F934L,18446744073709551615UL},{0x545EE28FL,0xEAD9BACCL}},{{18446744073709551608UL,0UL},{0x23ED15DEL,18446744073709551615UL},{0x1B88146CL,0x1B88146CL},{2UL,1UL},{0xEAD9BACCL,0x4E94F934L}},{{18446744073709551615UL,0x7C04CCB6L},{1UL,18446744073709551615UL},{0x2CFB6318L,0UL},{0x2CFB6318L,18446744073709551615UL},{1UL,0x7C04CCB6L}},{{18446744073709551615UL,0x4E94F934L},{0xEAD9BACCL,1UL},{2UL,0x1B88146CL},{0x1B88146CL,18446744073709551615UL},{0x23ED15DEL,0UL}}};
static int32_t g_6 = 1L;
static int32_t * volatile g_5 = &g_6;/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5 g_6
 * writes: g_6
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_3 = (void*)0;
    int32_t **l_2 = &l_3;
    (*l_2) = (void*)0;
    (*g_5) &= g_4[3][4][1];
    return g_6;
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
    transparent_crc(g_6, "g_6", print_hash_value);
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 5

XXX total number of pointers: 3

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 4

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
   level: 2, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 85.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

