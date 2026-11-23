extern u8 D_03002510[];

void sub_08037FC4(void *, s32);

typedef struct {
    u8 pad00[0x40];
    u8 unk40;
    u8 pad41[0x50 - 0x41];
    u8 unk50;
    u8 pad51[0x61 - 0x51];
    u8 unk61;
} Struct32968;

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B;
    u8 unk3C;
    u8 pad3D[0x90 - 0x3D];
} Struct2510Entry;

void sub_08032968(Struct32968 *arg0)
{
    u8 *p = &arg0->unk50;
    s32 zero = 0;

    *p = 4;
    sub_08037FC4(arg0, 0x20);
    arg0->unk61 = 2;
    arg0->unk40 = zero;
}

s32 sub_08032928(void)
{
    s32 ret = 1;
    u8 i = 0;
    u8 *arr = D_03002510;

    do {
        Struct2510Entry *entry = (Struct2510Entry *)(i * 0x90 + (u32)arr);
        if (entry->unk3A != 0 && entry->unk3C == 3) {
            ret = 0;
            break;
        }
        i++;
    } while (i <= 9);
    return ret;
}
