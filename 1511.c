/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/1511.c
 * Seed:      2225344216
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S4 {
   volatile unsigned f0 : 1;
   signed f1 : 12;
   volatile uint64_t  f2;
   unsigned f3 : 21;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = 0xBB4F5AC3L;
static uint64_t g_11[10][1] = {{0UL},{18446744073709551610UL},{0UL},{18446744073709551610UL},{0UL},{18446744073709551610UL},{0UL},{18446744073709551610UL},{0UL},{18446744073709551610UL}};
static struct S4 g_13 = {0,-18,0x355C0C8FBFC75DAALL,1160};/* VOLATILE GLOBAL g_13 */
static struct S4 *g_12 = &g_13;
static struct S4 ** volatile g_14[6] = {&g_12,&g_12,(void*)0,&g_12,&g_12,(void*)0};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static struct S4 * func_5(struct S4 * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_11 g_12
 * writes: g_4 g_11 g_12
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_3 = &g_4;
    int32_t **l_2 = &l_3;
    struct S4 *l_7 = (void*)0;
    struct S4 **l_15 = &g_12;
    int8_t l_16 = 7L;
    (*l_2) = (void*)0;
    (*l_15) = func_5(l_7);
    return l_16;
}


/* ------------------------------------------ */
/* 
 * reads : g_4 g_11 g_12
 * writes: g_4 g_11
 */
static struct S4 * func_5(struct S4 * p_6)
{ /* block id: 2 */
    for (g_4 = 0; (g_4 == (-14)); --g_4)
    { /* block id: 5 */
        int16_t l_10 = 7L;
        g_11[1][0] ^= l_10;
    }
    return g_12;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    transparent_crc(g_13.f3, "g_13.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 3
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 0
   indirect level: 1, occurrence: 2
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2

XXX total number of pointers: 8

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 3
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 4
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1.12

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

