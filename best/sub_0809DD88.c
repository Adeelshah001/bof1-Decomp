void sub_080A0214(const void *src, void *dst, u32 mode);

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 pad04[4];
    u8 unk8;
    u8 pad09[2];
    u8 unkB;
    u8 pad0C[8];
    s32 unk14;
    u8 pad18[0x10];
    u16 * volatile unk28;
} Unk50A0;

#define S50A0 ((Unk50A0 *)0x030050A0)

void sub_0809DD88(const void *arg0)
{
    u32 sum = 0;
    u16 *p;
    u32 i;

    ((u8 *)S50A0->unk28)[0] = S50A0->unkB;
    ((u8 *)S50A0->unk28)[1] = S50A0->unk2 ^ S50A0->unk3;
    S50A0->unk28[1] = sum;
    sub_080A0214(arg0, S50A0->unk28 + 2, 0x04000004);
    i = 0;
    p = S50A0->unk28;
    do {
        sum += *p++;
        i++;
    } while (i <= 9);
    S50A0->unk28[1] = ~sum;
    if (S50A0->unk0 != 0) {
        *(vu16 *)0x0400010E = 0;
    }
    S50A0->unk14 = -1;
    if (S50A0->unk0 != 0 && S50A0->unk8 != 0) {
        *(vu16 *)0x0400010E = 0xC0;
    }
}
