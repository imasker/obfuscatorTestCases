/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/9584.c
 * Seed:      2745905756
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0x68C0AA39L;
static volatile int8_t g_10[1][7] = {{0xBFL,0xBFL,0xBFL,0xBFL,0xBFL,0xBFL,0xBFL}};
static volatile int8_t *g_9 = &g_10[0][1];
static int32_t g_13 = 0x1AFA9B64L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_9 g_10 g_13
 * writes: g_2 g_13
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    for (g_2 = 0; (g_2 < 15); g_2 = safe_add_func_int16_t_s_s(g_2, 8))
    { /* block id: 3 */
        int32_t *l_11 = (void*)0;
        int32_t *l_12[10] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
        int i;
        g_13 ^= (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((void*)0 != g_9), 7)) , g_10[0][1]), (-1L)));
    }
    return g_13;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_13, "g_13", print_hash_value);
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 3

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1.33

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 25
XXX percentage an existing variable is used: 75
********************* end of statistics **********************/

