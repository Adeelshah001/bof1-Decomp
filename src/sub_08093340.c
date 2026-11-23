void sub_080379D4(s32);
void sub_08096B44(void *);

extern u16 D_03001864;
extern u8 D_030045B0[];
extern u16 D_030016D8;

typedef struct {
    u8 pad00[0x4C];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54 : 8;
    u8 unk55 : 8;
} Obj93340;

void sub_08093340(Obj93340 *arg0)
{
    if ((--arg0->unk54) & 0x80) {
        sub_080379D4(0x16);
        *(u8 *)((u8 *)arg0 + 0x54) = 3;
        D_03001864 ^= 0x17;
        if ((--arg0->unk55) & 0x80) {
            arg0->unk4C++;
            D_030045B0[0x10] = 2;
            sub_08096B44(arg0);
            D_030016D8 = 0xF0F0;
        }
    }
}
