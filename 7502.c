/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/7502.c
 * Seed:      577250454
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0L;
static int32_t g_5[7][1][10] = {{{0x21591249L,1L,(-1L),(-1L),1L,0x21591249L,1L,(-1L),(-1L),1L}},{{0x21591249L,1L,(-1L),(-1L),1L,0x21591249L,1L,(-1L),(-1L),1L}},{{0x21591249L,1L,(-1L),(-1L),1L,0x21591249L,1L,(-1L),(-1L),1L}},{{0x21591249L,1L,(-1L),(-1L),1L,0x21591249L,1L,(-1L),(-1L),1L}},{{0x21591249L,1L,(-1L),(-1L),1L,0x21591249L,0x00FA72C2L,1L,1L,0x00FA72C2L}},{{0x41449C9FL,0x00FA72C2L,1L,1L,0x00FA72C2L,0x41449C9FL,0x00FA72C2L,1L,1L,0x00FA72C2L}},{{0x41449C9FL,0x00FA72C2L,1L,1L,0x00FA72C2L,0x41449C9FL,0x00FA72C2L,1L,1L,0x00FA72C2L}}};


/* --- FORWARD DECLARATIONS --- */
static uint64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3
 * writes: g_3 g_5
 */
static uint64_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t l_4[10];
    uint16_t l_8 = 0xCEF3L;
    int i;
    for (i = 0; i < 10; i++)
        l_4[i] = 8L;
    l_2 = l_2;
    for (g_3 = 9; (g_3 >= 0); g_3 -= 1)
    { /* block id: 4 */
        int32_t *l_6 = &g_5[1][0][4];
        int32_t *l_7[3];
        int i;
        for (i = 0; i < 3; i++)
            l_7[i] = &g_5[0][0][3];
        for (g_5[1][0][4] = 0; g_5[1][0][4] < 10; g_5[1][0][4] += 1)
        {
            l_4[g_5[1][0][4]] = 0x8A012E1DL;
        }
        l_8++;
    }
    return (*l_2);
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
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
   depth: 0, occurrence: 2
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
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1

XXX total number of pointers: 3

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 68

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 9.09
XXX percentage an existing variable is used: 90.9
********************* end of statistics **********************/

