/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/9065.c
 * Seed:      3673063554
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U3 {
   const uint32_t  f0;
   volatile int8_t  f1;
   const signed f2 : 14;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 0x8D19C921L;/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_3 = 1L;/* VOLATILE GLOBAL g_3 */
static int32_t g_4[1] = {1L};
static union U3 g_7 = {0xDF628589L};/* VOLATILE GLOBAL g_7 */


/* --- FORWARD DECLARATIONS --- */
static union U3  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7
 * writes: g_4
 */
static union U3  func_1(void)
{ /* block id: 0 */
    for (g_4[0] = 5; (g_4[0] < 15); g_4[0] = safe_add_func_uint16_t_u_u(g_4[0], 9))
    { /* block id: 3 */
        return g_7;
    }
    return g_7;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

