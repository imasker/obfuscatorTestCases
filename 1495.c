/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/1495.c
 * Seed:      1589851226
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4[7][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
static int32_t g_7 = 0xA5A40F2FL;
static uint32_t g_14 = 0xD70CADD6L;


/* --- FORWARD DECLARATIONS --- */
static uint64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7 g_14
 * writes: g_7 g_14
 */
static uint64_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_6 = &g_7;
    int32_t *l_10 = &g_7;
    int32_t l_11 = (-10L);
    int32_t *l_12[2][8];
    int16_t l_13 = (-1L);
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_12[i][j] = &l_11;
    }
    (*l_6) = (safe_lshift_func_uint16_t_u_s(g_4[6][0], (safe_unary_minus_func_int16_t_s((-1L)))));
    for (g_7 = 0; (g_7 >= 3); g_7 = safe_add_func_uint64_t_u_u(g_7, 1))
    { /* block id: 4 */
        return (*l_6);
    }
    ++g_14;
    return (*l_6);
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
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 5
   depth: 2, occurrence: 2

XXX total number of pointers: 3

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 20

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 4
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
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 44.4
XXX percentage an existing variable is used: 55.6
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

