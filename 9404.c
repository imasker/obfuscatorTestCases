/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/9404.c
 * Seed:      4209850630
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   const signed f0 : 17;
   signed f1 : 2;
   unsigned f2 : 28;
   volatile signed f3 : 24;
   volatile uint16_t  f4;
   const volatile unsigned f5 : 1;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_3[3] = {1L,1L,1L};
static volatile int32_t *g_2 = &g_3[1];
static volatile int32_t g_4 = 1L;/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = 0x68819570L;
static struct S0 g_8 = {-306,-1,2747,1736,0x505BL,0};/* VOLATILE GLOBAL g_8 */


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_3 g_8
 * writes: g_2 g_5
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    g_2 = (void*)0;
    for (g_5 = 0; (g_5 < (-13)); g_5 = safe_sub_func_uint32_t_u_u(g_5, 9))
    { /* block id: 4 */
        if (g_5)
            break;
        if (g_3[0])
            continue;
        return g_8;
    }
    return g_8;
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
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    transparent_crc(g_8.f5, "g_8.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 5
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 2
XXX volatile bitfields defined in structs: 2
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
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1

XXX total number of pointers: 1

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 100
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 85.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 28.6
XXX percentage an existing variable is used: 71.4
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

