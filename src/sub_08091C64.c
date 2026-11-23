void sub_080379D4(u8);
void sub_08037FC4(void *, s32);
void sub_08091BB8(void *);
u8 sub_080957BC(void *);
void sub_08096CD4(void *);
void sub_08097034(void *);

struct Unk91C64 {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x4C - 0x3C];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 unk55;
};

void sub_08091C64(struct Unk91C64 *arg0) {
    u8 ret;
    s32 tmp;

    do {
        ret = sub_080957BC(arg0);
        if (ret == 0) {
            return;
        }
        if (ret == 1) {
            sub_080379D4(0x21);
            sub_080379D4(5);
            sub_08097034(arg0);
            arg0->unk54 = 0;
            arg0->unk55 = 0;
            arg0->unk4C++;
            tmp = 0;
            if (arg0->unk3B == 0x1F) {
                tmp = 2;
            }
            sub_08037FC4(arg0, tmp);
            sub_08091BB8(arg0);
            return;
        }
    } while (ret == 2);
    sub_08096CD4(arg0);
}
