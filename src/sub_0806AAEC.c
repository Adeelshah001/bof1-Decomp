void sub_0805D5E4(s32, u8 *, s32);
void sub_0805AE70(u32, u32, u8 *);

extern u16 D_030045A0;

typedef struct {
    u8 pad00[0x103];
    u8 unk103;
} Actor6AAEC;

void sub_0806AAEC(Actor6AAEC *actor, u16 index)
{
    u8 buf[8];
    u8 val = actor->unk103;
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
    sub_0805AE70(index >> 1, D_030045A0 >> 8, buf);
}
