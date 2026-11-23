extern u8 D_03003420[];
extern u8 D_030023E0[];
extern u8 D_03004584;

typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;

extern State03004F50 D_03004F50;

u32 sub_08003104(void);
s32 sub_080984C8(u8 *entity);
s32 sub_080985A4(u8 *entity);
s32 sub_080985E0(void);
void sub_08001888(s32);
u8 sub_08001770(s32);
void sub_080017EC(s32);

void sub_0809748C(void *unused, u8 *entity)
{
    if (sub_080984C8(entity) == 0 && sub_080985A4(entity) == 0) {
        u8 flags = entity[0xDD];
        if ((2 & flags) == 0) {
            u32 value;
            u32 state;

            flags |= 2;
            entity[0xDD] = flags;
            value = sub_08003104();
            value <<= 24;
            state = 0x03000000;
            state &= value;
            state += 0x01000000;
            state >>= 20;
            state &= 0x30;
            entity[0xDF] |= state;
        }
    }
}

s32 sub_080975F0(u8 *arg0)
{
    if (arg0 < D_03003420 || arg0 >= D_03003420 + 0xB68) {
        u8 val;

        if (arg0[0x114] == 0x84) {
            return sub_080985E0();
        }
        val = arg0[0xEC];
        if (val == 0x43) {
            return sub_080985E0();
        }
        if (val == 0x86) {
            return 0;
        }
        val = arg0[0xEE];
        if (val == 0x43) {
            return sub_080985E0();
        }
        if (val == 0x86) {
            return 0;
        }
    }
    return sub_080985A4(arg0);
}

void sub_0807F5A8(void)
{
    sub_08001888(6);
    D_03004584 = 1;
    sub_08002BBC(D_03004F50.unk5B);
}

void sub_0807F568(void)
{
    if (*(u16 *)(D_030023E0 + 0xA4) == 0xD1 && sub_08001770(0x9B) == 0) {
        sub_080017EC(0x9B);
    }
    D_03004584 = 1;
    sub_08002BBC(D_03004F50.unk5B);
}
