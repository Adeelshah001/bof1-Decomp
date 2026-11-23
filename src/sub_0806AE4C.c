void sub_0805D5E4(s32, u8 *, s32);
void sub_0805AE70(u32, u32, u8 *);

extern u16 D_030045A0;

typedef struct {
    u8 pad00[0xFC];
    s32 unkFC;
} Actor6AE4C;

void sub_0806AE4C(Actor6AE4C *arg0, u16 arg1) {
    u8 buf[8];
    s32 val = arg0->unkFC;
    u8 *p;

    D_030045A0 &= 0xFF;
    if (D_030045A0 & 0x10) {
        D_030045A0 |= 0x100;
    } else if (D_030045A0 & 0x60) {
        D_030045A0 |= 0x200;
    }
    sub_0805D5E4(val, buf, 7);
    p = &buf[7];
    *p = 0;
    sub_0805AE70(arg1 >> 1, D_030045A0 >> 8, buf);
}
