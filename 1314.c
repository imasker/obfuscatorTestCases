/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/1314.c
 * Seed:      1065646934
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S1 {
   volatile int32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   unsigned f1 : 22;
   const volatile uint32_t  f2;
   volatile signed f3 : 17;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const struct S1  f0;
   const uint8_t  f1;
   volatile int32_t  f2;
   uint32_t  f3;
   const volatile uint32_t  f4;
   struct S0  f5;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static uint8_t g_2 = 0x34L;
static struct S2 g_5 = {{0xA47CDEDFL},0UL,-1L,4294967295UL,4UL,{1UL,337,0xFA553FC2L,137}};/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static struct S2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5
 * writes: g_2
 */
static struct S2  func_1(void)
{ /* block id: 0 */
    g_2++;
    return g_5;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5.f0.f0, "g_5.f0.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_5.f4, "g_5.f4", print_hash_value);
    transparent_crc(g_5.f5.f0, "g_5.f5.f0", print_hash_value);
    transparent_crc(g_5.f5.f1, "g_5.f5.f1", print_hash_value);
    transparent_crc(g_5.f5.f2, "g_5.f5.f2", print_hash_value);
    transparent_crc(g_5.f5.f3, "g_5.f5.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

