/* context.h for BOF1: shared by every function. Agents grow it with edit_context:
 * add a prototype or struct the moment you work one out, so the next function benefits. */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
typedef int s32_bool;

/* Common object/state struct seen by the 0x080483xx handlers:
 * 0x64 holds a Thumb function pointer (stored as address|1). */
typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x1C - 0x08];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x3A - 0x2E];
    u8 unk3A;
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x51 - 0x4E];
    u8 unk51;
    u8 pad52[0x54 - 0x52];
    u8 unk54;
    u8 pad55[0x60 - 0x55];
    u8 unk60;
    u8 pad61[0x64 - 0x61];
    u32 unk64;
    u32 unk68;
    u32 unk6C;
    u32 unk70;
    u32 unk74;
    u32 unk78;
} Entity;

#define NULL ((void *)0)
#define TRUE 1
#define FALSE 0
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

void sub_080547DC(void *arg0, s32 arg1);
void sub_080075A4(u16 arg0);

/* EWRAM state block used by the sub_08007Bxx helpers:
 * [0x2B] = byte counter, [0x2C] = signed state byte (0 = active). */
extern u8 D_03004830[];
extern void sub_0800B10C(void);

extern u8 D_03003420[];
extern u8 D_030023D0[];

/* Prototypes used by the 0x080319xx helper family (identical to matched sources). */
void sub_08056B88(void);
void sub_08056C18(s32 arg0);
void sub_08033B18(s32 arg0);
/* Looks up a tile/object at (x, y); writes a result through *out. */
void sub_08038AB4(u16 x, u16 y, u16 *out);
void sub_0802E788(s32 arg0, u16 arg1);

void sub_08002BBC(u8 arg0);

/* Called when state flags at 0xB8 have neither 0x04 nor 0x08 and word 0x88 is zero. */
void sub_08047000(void);
