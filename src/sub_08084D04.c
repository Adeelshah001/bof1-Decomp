typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0xE2 - 0x3C];
    u8 unkE2;
    u8 padE3[0x124 - 0xE3];
} Unk124;

extern Unk124 D_03002AB0[];

void sub_08038390(Unk124 *, Unk124 *);
void sub_0807AEF0(Unk124 *);

Unk124 *sub_08084D04(u16 arg0, u16 arg1)
{
    Unk124 *b;
    Unk124 *a;
    u8 tmp;

    a = &D_03002AB0[arg0];
    b = &D_03002AB0[arg1];
    tmp = b->unkE2;
    b->unkE2 = a->unkE2;
    a->unkE2 = tmp;
    sub_08038390(b, a);
    if (a->unk3B <= 3) {
        sub_0807AEF0(a);
    } else {
        sub_0807AEF0(b);
    }
    return b;
}
