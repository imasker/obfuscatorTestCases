/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/6439.c
 * Seed:      564328514
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   volatile int64_t  f0;
   int8_t  f1;
   uint8_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0x48AFA2FAL;
static union U1 g_5[5][7] = {{{0xA9F8D19C9214A9BALL},{-10L},{-10L},{0xA9F8D19C9214A9BALL},{1L},{8L},{1L}},{{0xA9F8D19C9214A9BALL},{-10L},{-10L},{0xA9F8D19C9214A9BALL},{1L},{8L},{1L}},{{0xA9F8D19C9214A9BALL},{-10L},{-10L},{0xA9F8D19C9214A9BALL},{1L},{8L},{1L}},{{0xA9F8D19C9214A9BALL},{-10L},{-10L},{0xA9F8D19C9214A9BALL},{1L},{8L},{1L}},{{0xA9F8D19C9214A9BALL},{-10L},{-10L},{0xA9F8D19C9214A9BALL},{1L},{8L},{1L}}};
static int32_t *g_11 = &g_2;
static int32_t g_13 = 0x8AB9C279L;


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);
static int32_t * func_6(int32_t * p_7, int32_t * p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5 g_11 g_13
 * writes: g_2 g_11 g_13
 */
static union U1  func_1(void)
{ /* block id: 0 */
    int32_t *l_10 = &g_2;
    int32_t **l_9 = &l_10;
    int32_t *l_12 = &g_13;
    for (g_2 = 0; (g_2 != 23); ++g_2)
    { /* block id: 3 */
        return g_5[1][2];
    }
    g_11 = func_6(((*l_9) = (void*)0), &g_2);
    (*l_12) &= (*g_11);
    return g_5[1][4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_6(int32_t * p_7, int32_t * p_8)
{ /* block id: 7 */
    return p_8;
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
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_5[i][j].f0, "g_5[i][j].f0", print_hash_value);
            transparent_crc(g_5[i][j].f1, "g_5[i][j].f1", print_hash_value);
            transparent_crc(g_5[i][j].f2, "g_5[i][j].f2", print_hash_value);
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
   depth: 0, occurrence: 2
XXX total union variables: 1

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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1
   depth: 4, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 7

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
   level: 2, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 20
XXX average alias set size: 1.2

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 22.2
XXX percentage an existing variable is used: 77.8
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

