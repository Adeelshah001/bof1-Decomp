extern u8 D_03003410;
extern u16 D_0300168C;
extern u16 D_03001644;

struct UnkStruct807C8 {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
};

s32 sub_080807C8(void *unused, struct UnkStruct807C8 *arg1)
{
    D_03003410 = 0;
    if (arg1->unk41 == 0xE) {
        u8 id = arg1->unk3C;
        if (id == 0x43 || id == 0x2E || id == 0x45 || id == 0x2D || id == 0x60 || id == 0x52) {
            D_0300168C = 0x84;
            D_03001644 = 0x10;
        }
    } else {
        u8 id = arg1->unk3C;
        if (id == 0x43 || id == 0x2E || id == 0x45 || id == 0x2D || id == 0x60 || id == 0x52) {
            D_0300168C = 0x84;
            D_03001644 = 0;
        }
    }
    return 3;
}
