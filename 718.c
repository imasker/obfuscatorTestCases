/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/718.c
 * Seed:      3954789230
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_3[1][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
static int8_t * volatile g_2 = &g_3[0][5];/* VOLATILE GLOBAL g_2 */
static int32_t g_5[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
static uint8_t g_10[1][9] = {{0xA2L,0xA2L,255UL,0xA2L,0xA2L,255UL,0xA2L,0xA2L,255UL}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int8_t * func_6(const uint64_t  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_10
 * writes: g_5 g_10
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_4 = &g_5[1];
    int32_t l_9 = (-3L);
    int32_t *l_11[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int16_t l_12 = 6L;
    int i, j;
    l_12 = (g_2 == ((((((*l_4) = 0xA8FE2430L) , func_6(g_3[0][0])) == (void*)0) > (0x126C7F05L | (g_10[0][4] = l_9))) , func_6(g_10[0][4])));
    return g_10[0][4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int8_t * func_6(const uint64_t  p_7)
{ /* block id: 2 */
    int8_t *l_8 = &g_3[0][3];
    return l_8;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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

XXX max expression depth: 11
breakdown:
   depth: 1, occurrence: 3
   depth: 11, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1.25

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 4
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 90

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 62.5
XXX percentage an existing variable is used: 37.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

