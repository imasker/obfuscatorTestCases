/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/1125.c
 * Seed:      804729556
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3[10][3] = {{1L,0xA6E6F7FBL,0x8D3C891CL},{1L,1L,1L},{1L,0x66F5A9C4L,2L},{7L,4L,2L},{0x4DD03248L,2L,1L},{9L,0xEEDE0B40L,0x8D3C891CL},{2L,2L,0xEEDE0B40L},{0xA6E6F7FBL,4L,1L},{0xA6E6F7FBL,0x66F5A9C4L,9L},{2L,1L,4L}};
static int32_t *g_5[2][7] = {{&g_3[2][0],&g_3[2][0],&g_3[2][0],&g_3[2][0],&g_3[2][0],&g_3[2][0],&g_3[2][0]},{&g_3[2][0],&g_3[2][0],&g_3[2][0],&g_3[2][0],&g_3[2][0],&g_3[2][0],&g_3[2][0]}};
static int32_t ** volatile g_4 = &g_5[0][5];/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5 g_3
 * writes: g_5
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3[7][1];
    (*g_4) = l_2;
    return (**g_4);
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
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 3

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
   level: 2, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/
