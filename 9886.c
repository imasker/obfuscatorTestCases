/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/9886.c
 * Seed:      37548468
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_6[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
static int32_t *g_5 = &g_6[1];
static int32_t *g_9 = (void*)0;
static int32_t *g_10 = (void*)0;


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);
static int32_t * func_2(int32_t * p_3, int32_t * const  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_6
 * writes: g_5 g_9 g_10
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    int32_t * const l_7 = &g_6[1];
    int32_t **l_8[9] = {&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5};
    int i;
    g_10 = (g_9 = (g_5 = func_2(g_5, l_7)));
    return g_6[5];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_2(int32_t * p_3, int32_t * const  p_4)
{ /* block id: 1 */
    return &g_6[1];
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
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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
   depth: 1, occurrence: 3
   depth: 5, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1.17

XXX times a non-volatile is read: 3
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

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

