/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/2413.c
 * Seed:      323091246
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   signed f0 : 5;
   unsigned f1 : 6;
   signed f2 : 16;
   volatile signed f3 : 28;
   unsigned f4 : 27;
   volatile signed f5 : 6;
};

/* --- GLOBAL VARIABLES --- */
static struct S0 g_2[3] = {{-1,6,141,1941,1184,-0},{-1,6,141,1941,1184,-0},{-1,6,141,1941,1184,-0}};
static struct S0 g_3 = {-4,7,-39,-5191,5380,2};/* VOLATILE GLOBAL g_3 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3.f0
 * writes: g_3
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    g_3 = g_2[1];
    return g_3.f0;
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
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i].f0, "g_2[i].f0", print_hash_value);
        transparent_crc(g_2[i].f1, "g_2[i].f1", print_hash_value);
        transparent_crc(g_2[i].f2, "g_2[i].f2", print_hash_value);
        transparent_crc(g_2[i].f3, "g_2[i].f3", print_hash_value);
        transparent_crc(g_2[i].f4, "g_2[i].f4", print_hash_value);
        transparent_crc(g_2[i].f5, "g_2[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_3.f2, "g_3.f2", print_hash_value);
    transparent_crc(g_3.f3, "g_3.f3", print_hash_value);
    transparent_crc(g_3.f4, "g_3.f4", print_hash_value);
    transparent_crc(g_3.f5, "g_3.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 6
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 2
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 1
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 1

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

