extern u8 D_03003420[];
extern u8 D_03004584;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} State030023E0;

typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;

extern State030023E0 D_030023E0;
extern State03004F50 D_03004F50;

u8 sub_08001770(s32);
void sub_080017EC(s32);
s32 sub_080985A4(u8 *entity);
s32 sub_080985E0(void);

void sub_0807F568(void)
{
    if (D_030023E0.unkA4 == 0xD1 && sub_08001770(0x9B) == 0) {
        sub_080017EC(0x9B);
    }
    D_03004584 = 1;
    sub_08002BBC(D_03004F50.unk5B);
}

s32 sub_080975F0(u8 *arg0)
{
    if (arg0 < D_03003420 || arg0 >= D_03003420 + 0xB68) {
        u8 val;

        if (arg0[0x114] == 0x84 || (val = arg0[0xEC]) == 0x43 || (val != 0x86 && (val = arg0[0xEE]) == 0x43)) {
            return sub_080985E0();
        }
        if (val == 0x86) {
            return 0;
        }
    }
    return sub_080985A4(arg0);
}
