/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/704.c
 * Seed:      2801551560
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   unsigned f0 : 18;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[2][3] = {{0L,9L,0L},{0L,9L,0L}};
static volatile int32_t g_3[1][8][2] = {{{0x0B0881DDL,0x0B0881DDL},{0x0B0881DDL,0x0B0881DDL},{0x0B0881DDL,0x0B0881DDL},{0x0B0881DDL,0x0B0881DDL},{0x0B0881DDL,0x0B0881DDL},{0x0B0881DDL,0x0B0881DDL},{0x0B0881DDL,0x0B0881DDL},{0x0B0881DDL,0x0B0881DDL}}};
static volatile int32_t g_4 = (-1L);/* VOLATILE GLOBAL g_4 */
static int32_t g_5[9] = {0xF37FC033L,0xF37FC033L,0xD4752E4AL,0xF37FC033L,0xF37FC033L,0xD4752E4AL,0xF37FC033L,0xF37FC033L,0xD4752E4AL};
static volatile int32_t * volatile g_10 = &g_2[1][2];/* VOLATILE GLOBAL g_10 */
static struct S0 g_11 = {381};


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_2 g_10 g_11
 * writes: g_5 g_2
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    struct S0 l_8 = {113};
    for (g_5[2] = 0; (g_5[2] < (-19)); --g_5[2])
    { /* block id: 3 */
        struct S0 *l_9 = &l_8;
        (*l_9) = l_8;
    }
    (*g_10) = g_2[1][2];
    return g_11;
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
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 2
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
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

