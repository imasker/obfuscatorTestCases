/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/5458.c
 * Seed:      1718406110
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile unsigned f0 : 29;
   volatile unsigned f1 : 30;
   unsigned f2 : 8;
   volatile unsigned f3 : 20;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static struct S0 g_2[5][8] = {{{8109,18339,12,374},{1029,27323,11,999},{18156,5375,0,87},{2341,20924,7,225},{14852,15221,6,786},{22220,18779,6,897},{4360,4311,7,916},{13481,27116,1,711}},{{4360,4311,7,916},{13618,6242,11,932},{18156,5375,0,87},{21826,17763,15,31},{21826,17763,15,31},{18156,5375,0,87},{13618,6242,11,932},{4360,4311,7,916}},{{14852,15221,6,786},{10563,7425,3,146},{8109,18339,12,374},{17054,30205,6,630},{17750,26400,7,369},{1029,27323,11,999},{1688,100,13,85},{18156,5375,0,87}},{{0,18494,8,741},{2341,20924,7,225},{17750,26400,7,369},{21147,25669,8,531},{17054,30205,6,630},{1029,27323,11,999},{17054,30205,6,630},{21147,25669,8,531}},{{13618,6242,11,932},{10563,7425,3,146},{13618,6242,11,932},{8109,18339,12,374},{1029,27323,11,999},{18156,5375,0,87},{2341,20924,7,225},{14852,15221,6,786}}};


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    return g_2[2][4];
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
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j].f0, "g_2[i][j].f0", print_hash_value);
            transparent_crc(g_2[i][j].f1, "g_2[i][j].f1", print_hash_value);
            transparent_crc(g_2[i][j].f2, "g_2[i][j].f2", print_hash_value);
            transparent_crc(g_2[i][j].f3, "g_2[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 4
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 3
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 1
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

