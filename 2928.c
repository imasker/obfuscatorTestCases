/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/2928.c
 * Seed:      415090374
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile signed f0 : 17;
   unsigned f1 : 2;
   unsigned f2 : 28;
   const unsigned f3 : 24;
   int16_t  f4;
   signed f5 : 1;
   signed f6 : 30;
   signed f7 : 31;
};

/* --- GLOBAL VARIABLES --- */
static uint32_t g_5 = 3UL;
static int32_t g_7 = 0L;
static int32_t *g_6 = &g_7;
static const struct S0 g_10[2][1] = {{{289,0,14524,3647,1L,0,-26932,-40202}},{{289,0,14524,3647,1L,0,-26932,-40202}}};


/* --- FORWARD DECLARATIONS --- */
static const struct S0  func_1(void);
static int32_t * func_2(int64_t  p_3, int32_t * p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_6 g_10
 * writes: g_6
 */
static const struct S0  func_1(void)
{ /* block id: 0 */
    int32_t **l_9 = &g_6;
    (*l_9) = func_2(g_5, g_6);
    return g_10[0][0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_2(int64_t  p_3, int32_t * p_4)
{ /* block id: 1 */
    int32_t *l_8[3][5];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_8[i][j] = &g_7;
    }
    return l_8[2][2];
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
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_10[i][j].f0, "g_10[i][j].f0", print_hash_value);
            transparent_crc(g_10[i][j].f1, "g_10[i][j].f1", print_hash_value);
            transparent_crc(g_10[i][j].f2, "g_10[i][j].f2", print_hash_value);
            transparent_crc(g_10[i][j].f3, "g_10[i][j].f3", print_hash_value);
            transparent_crc(g_10[i][j].f4, "g_10[i][j].f4", print_hash_value);
            transparent_crc(g_10[i][j].f5, "g_10[i][j].f5", print_hash_value);
            transparent_crc(g_10[i][j].f6, "g_10[i][j].f6", print_hash_value);
            transparent_crc(g_10[i][j].f7, "g_10[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 7
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 3
   depth: 3, occurrence: 1

XXX total number of pointers: 3

XXX times a variable address is taken: 3
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
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

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

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

