u8 sub_080936F0(s32 arg0, s32 arg1);
void sub_080379D4(s32 arg0);
void sub_0809184C(void *arg0);

typedef struct {
    u8 pad00[0x4A];
    u8 unk4A;
    u8 pad4B[0x5D - 0x4B];
    u8 unk5D;
} State03004F50;

extern u8 D_03004F30[];
extern State03004F50 D_03004F50;

u8 sub_080957BC(s32 arg0)
{
    u8 res;
    if (D_03004F30[9] & 0x0E) {
        D_03004F50.unk4A = 0;
        res = 3;
    } else if (D_03004F50.unk5D != 0) {
        res = sub_080936F0(arg0, 0);
    } else {
        res = 0;
    }
    return res;
}

void sub_080958D0(Entity *arg0)
{
    u16 *ptr = (u16 *)&arg0->unk54;
    if (((--(*ptr)) & 0xFFFF) & 0x8000) {
        sub_080379D4(0xF4);
        arg0->unk54 = 0x2F;
        sub_0809184C(arg0);
    }
}
