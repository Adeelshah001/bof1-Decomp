void sub_0805D5E4(s32, u8 *, s32);
void sub_0805AE70(u32, u32, u8 *);

extern u16 D_030045A0;

typedef struct {
    u8 pad00[0x101];
    u8 unk101;
} Actor6AA80;

void sub_0806AA80(Actor6AA80 *arg0, u16 arg1) {
    u8 buf[8];
    u8 val = arg0->unk101;
    u8 *p;

    D_030045A0 &= 0xFF;
    if (D_030045A0 & 0x10) {
        D_030045A0 |= 0x100;
    } else if (D_030045A0 & 0x60) {
        D_030045A0 |= 0x200;
    }
    sub_0805D5E4(val, buf, 3);
    p = &buf[3];
    *p = 0;
    sub_0805AE70(arg1 >> 1, D_030045A0 >> 8, buf);
}
