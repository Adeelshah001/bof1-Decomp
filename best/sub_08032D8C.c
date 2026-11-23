extern u8 D_03002510[];
extern u8 D_03002AB0[];

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

typedef struct {
    u8 pad00[0xEC];
    u16 unkEC;
    u16 unkEE;
} Struct2AB0;

void sub_08032968(Struct32968 *arg0)
{
    s32 zero = 0;
    arg0->unk50 = 4;
    sub_08037FC4(arg0, 0x20);
    arg0->unk61 = 2;
    arg0->unk40 = zero;
}

s32 sub_08032928(void)
{
    s32 ret = 1;
    u8 i = 0;
    Struct2510Entry *arr = (Struct2510Entry *)D_03002510;

    do {
        Struct2510Entry *entry = &arr[i];
        if (entry->unk3A != 0 && entry->unk3C == 3) {
            ret = 0;
            break;
        }
        i++;
    } while (i <= 9);
    return ret;
}

s32 sub_080328C8(u16 arg0, u16 *arg1)
{
    s32 ret = 0;
    if (!(arg0 & 0x3000)) {
        arg0 = (arg0 & 0xFF) - 0x4F;
        if (!(arg0 & 0x8000) && arg0 <= 4) {
            *arg1 = arg0;
            ret = 1;
        }
    }
    return ret;
}

s32 sub_08032D8C(void)
{
    s32 ret = 1;
    if (((Struct2AB0 *)D_03002AB0)->unkEC == 0x153 || ((Struct2AB0 *)D_03002AB0)->unkEE == 0x153) {
        ret = 0;
    }
    return ret;
}
