/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   -o /home/x/obfuscator/data/programs/9252.c
 * Seed:      3808011602
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S2 {
   volatile signed f0 : 26;
   signed f1 : 24;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 5L;
static int16_t g_10[3] = {(-4L),(-4L),(-4L)};
static int32_t *g_12[7] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
static int32_t ** volatile g_11 = &g_12[2];/* VOLATILE GLOBAL g_11 */
static int32_t g_14[8] = {0x58B39D20L,0x58B39D20L,0x58B39D20L,0x58B39D20L,0x58B39D20L,0x58B39D20L,0x58B39D20L,0x58B39D20L};
static volatile uint32_t g_22 = 0xF6C987F9L;/* VOLATILE GLOBAL g_22 */
static struct S2 g_28 = {849,3915};/* VOLATILE GLOBAL g_28 */


/* --- FORWARD DECLARATIONS --- */
static struct S2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_11 g_22 g_28
 * writes: g_2 g_10 g_12 g_22
 */
static struct S2  func_1(void)
{ /* block id: 0 */
    uint32_t l_8 = 0xA6C84902L;
    int32_t l_15 = 0L;
    int32_t l_21[10][10] = {{(-3L),0xA259C42FL,0L,0x3C8A0C09L,0xCC702B5BL,0x8E9D28BCL,0x6037280DL,0x67A3D58EL,0xE769035AL,0x165D3E8EL},{0x6F4846E1L,0x2449EF57L,(-1L),0x1B546539L,0x3C8A0C09L,7L,0xFB38A83AL,1L,0xBB6AF833L,0x6DAD8BE7L},{0L,0x6F4846E1L,0x0C437FFEL,0xA259C42FL,0x55752783L,0x6037280DL,0x55752783L,0xA259C42FL,0L,0xBB6AF833L},{0x55752783L,0x1B546539L,0xE769035AL,(-2L),(-1L),0x3C8A0C09L,0x6037280DL,(-1L),0x6DAD8BE7L,1L},{0L,1L,0xEE6EE3E4L,0x68D9A65CL,0xDDD5D57DL,0x3C8A0C09L,(-2L),(-3L),5L,6L},{0x55752783L,(-1L),1L,(-3L),1L,7L,0x0C437FFEL,0xE769035AL,0xCC702B5BL,0xCC702B5BL},{0xCC702B5BL,0x2449EF57L,(-10L),0x6DAD8BE7L,0x6DAD8BE7L,(-10L),0x2449EF57L,0xCC702B5BL,6L,5L},{0xBB6AF833L,0x54656E2EL,0xA259C42FL,0xEE6EE3E4L,(-1L),0x2449EF57L,6L,0x68D9A65CL,1L,0x6DAD8BE7L},{6L,0L,0xA259C42FL,(-1L),0xE769035AL,0x68D9A65CL,0L,0xCC702B5BL,0xBB6AF833L,0L},{(-1L),0xA259C42FL,(-10L),5L,0L,0x0C437FFEL,0xFB38A83AL,0xE769035AL,0xFB38A83AL,0x0C437FFEL}};
    int i, j;
    for (g_2 = (-7); (g_2 > (-11)); g_2--)
    { /* block id: 3 */
        uint8_t l_7 = 1UL;
        int16_t *l_9 = &g_10[1];
        int32_t l_16 = 4L;
        if ((safe_lshift_func_uint16_t_u_s(l_7, ((*l_9) = l_8))))
        { /* block id: 5 */
            (*g_11) = &g_2;
        }
        else
        { /* block id: 7 */
            uint32_t l_17 = 5UL;
            int32_t l_20 = 0xC24489BEL;
            for (l_8 = 1; (l_8 <= 6); l_8 += 1)
            { /* block id: 10 */
                int32_t *l_13[3];
                uint16_t l_25 = 0x7AD2L;
                int i;
                for (i = 0; i < 3; i++)
                    l_13[i] = &g_14[4];
                --l_17;
                g_22++;
                ++l_25;
                for (l_17 = 0; (l_17 <= 6); l_17 += 1)
                { /* block id: 16 */
                    return g_28;
                }
            }
        }
    }
    return g_28;
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
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_14[i], "g_14[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 9
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 10
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 89

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 8
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 14
XXX percentage of non-volatile access: 88.2

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 10
XXX max block depth: 4
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
   depth: 2, occurrence: 2
   depth: 3, occurrence: 4
   depth: 4, occurrence: 1

XXX percentage a fresh-made variable is used: 38.5
XXX percentage an existing variable is used: 61.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

