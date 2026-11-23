extern u8 D_030045B0[];
extern u16 D_030016D8;

void sub_080379D4(s32);
void sub_08096A98(void *);

typedef struct {
    u8 pad00[0x4C];
    u8 unk4C;
} Struct08093218;

void sub_08093218(Struct08093218 *arg0) {
    u8 tmp;

    D_030045B0[0x4A] += 2;
    tmp = D_030045B0[0x49] - 2;
    if (!(tmp & 0x80)) {
        D_030045B0[0x49] = tmp;
        D_030016D8 = (D_030045B0[0x49] << 8) | D_030045B0[0x4A];
        if (tmp == 0) {
            D_030016D8 = 0xF0;
        }
    } else {
        sub_080379D4(0x18);
        arg0->unk4C = 4;
        D_030045B0[0x46] = 0x33;
        tmp = 3;
        D_030045B0[0x47] = tmp;
        D_030045B0[0x48] = tmp;
    }
    sub_08096A98(arg0);
}
