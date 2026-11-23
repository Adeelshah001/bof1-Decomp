s32 sub_080379D4(s32);
void sub_08059978(void);
void sub_0805A9FC(void);
s32 sub_0805B2B4(s32 arg0, s32 arg1);
s32 sub_0805E044(u16 arg0);
s32 sub_08068E5C(void);
s32 sub_0806B314(void);

extern u16 D_0202DBD0[];

struct Unk_03004620 {
    u8 pad0[3];
    u8 unk3;
    u8 pad4[3];
    u8 unk7;
    u8 pad8[0xB6 - 8];
    u8 unkB6;
};

extern struct Unk_03004620 D_03004620;

s32 sub_08069200(void)
{
    u32 base;
    u32 off;
    u16 val;

    base = (u32)D_0202DBD0;
    off = (u32)D_03004620.unkB6 << 1;
    base += 0x81 << 2;
    off += base;
    val = *(u16 *)off;
    if (sub_08068E5C() != 0 || sub_0805E044(val) != 0) {
        sub_080379D4(3);
        sub_08059978();
        sub_0805B2B4(0x606, 0);
        sub_0805A9FC();
        D_03004620.unk3 = 4;
        D_03004620.unk7 = 0xFF;
        return 0;
    }
    sub_080379D4(2);
    return sub_0806B314();
}
