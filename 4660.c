/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/4660.c
 * Seed:      1332663916
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2[1][9][10] = {{{0UL,1UL,7UL,0UL,7UL,1UL,0UL,65535UL,0x845DL,0x845DL},{0UL,0x845DL,0x3099L,65535UL,65535UL,0x3099L,0x845DL,0UL,0x838AL,65535UL},{0x3099L,0x845DL,0UL,0x838AL,65535UL,0x838AL,0UL,0x845DL,0x3099L,65535UL},{7UL,1UL,0UL,65535UL,0x845DL,0x845DL,65535UL,0UL,1UL,7UL},{1UL,0x838AL,0x3099L,65535UL,0x2A2BL,7UL,0UL,0x845DL,65535UL,1UL},{0x838AL,0xEDB5L,0x3099L,1UL,0UL,0UL,0UL,0UL,1UL,0x3099L},{0UL,0UL,0x2A2BL,0x838AL,7UL,0UL,65535UL,0UL,7UL,0x838AL},{0x838AL,65535UL,0x838AL,0UL,0x845DL,0x3099L,65535UL,65535UL,0x3099L,0x845DL},{0x2A2BL,0UL,0UL,0x2A2BL,0x838AL,7UL,0UL,65535UL,0UL,7UL}}};
static int32_t g_3 = 0x8DD44AD3L;
static volatile int32_t g_4 = (-8L);/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = (-4L);


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3
 * writes: g_3 g_4 g_5 g_2
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; g_3 < 1; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 9; g_4 += 1)
        {
            for (g_5 = 0; g_5 < 10; g_5 += 1)
            {
                g_2[g_3][g_4][g_5] = 0xFE8BL;
            }
        }
    }
    return g_3;
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
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

