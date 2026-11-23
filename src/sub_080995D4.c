void sub_08037FC4(void *, s32);
void sub_08038178(void *, void *);

typedef struct {
    u8 pad00[0x38];
    u16 unk38;
    u8 unk3A;
    u8 pad3B[0x44 - 0x3B];
    u16 unk44;
    u8 pad46[0x4C - 0x46];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x61 - 0x56];
    u8 unk61;
    u8 pad62[0x70 - 0x62];
    u8 unk70;
    u8 pad71[0x78 - 0x71];
    void *unk78;
} Obj995D4;

Obj995D4 *sub_0809A8F4(Obj995D4 *);

void sub_080995D4(Obj995D4 *arg0)
{
    arg0->unk38 = 0xE0;
    arg0->unk55 = 3;
    arg0->unk70 = 5;
    arg0->unk54 = 1;
    arg0->unk4C = 2;
    sub_08037FC4(arg0, 0xA);
    sub_08038178(arg0, arg0->unk78);
    arg0->unk44 = (arg0->unk61 & 0xF0) << 8;
    do {
        Obj995D4 *child;
        arg0->unk55--;
        child = sub_0809A8F4(arg0);
        child->unk3A = 1;
        child->unk4C = 2;
        arg0->unk54 += 5;
    } while (arg0->unk55 != 0);
}
