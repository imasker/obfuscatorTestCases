/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/5747.c
 * Seed:      2627235528
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_3[8] = {(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L};
static volatile int32_t *g_2 = &g_3[4];
static volatile int32_t ** const  volatile g_4 = &g_2;/* VOLATILE GLOBAL g_4 */
static int32_t g_6 = 3L;


/* --- FORWARD DECLARATIONS --- */
static const int64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4 g_3
 * writes: g_2 g_3
 */
static const int64_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_5 = &g_6;
    int32_t l_7 = 1L;
    int32_t l_8 = 0xE2BBEF7DL;
    int32_t *l_9 = &l_7;
    int32_t *l_10 = (void*)0;
    int32_t *l_11 = &l_8;
    int32_t *l_12 = &g_6;
    int32_t l_13 = 8L;
    int32_t *l_14 = &l_8;
    int32_t *l_15[6];
    uint64_t l_16 = 9UL;
    int64_t l_21[6];
    int i;
    for (i = 0; i < 6; i++)
        l_15[i] = &l_13;
    for (i = 0; i < 6; i++)
        l_21[i] = (-1L);
    (*g_4) = g_2;
    l_16--;
    (*g_2) = (safe_div_func_uint64_t_u_u(l_21[5], 4L));
    return g_3[4];
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
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
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

XXX total number of pointers: 9

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 54

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 8
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 11.1
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 62.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 42.9
XXX percentage an existing variable is used: 57.1
********************* end of statistics **********************/

