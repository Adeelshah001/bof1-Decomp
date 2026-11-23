extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u16 D_0300413C;

void sub_080123FC(Entity *arg0);
void sub_08010744(Entity *arg0, s32 arg1);

void sub_080123A0(Entity *arg0)
{
    u8 *ptr = D_03002AB0;
    ptr += 0xB8;
    *ptr |= 0x40;
    arg0->unk68 += 2;
}

void sub_080123D0(Entity *arg0)
{
    u8 *ptr = (u8 *)arg0->unk68;

    if (((s8)D_03004830[0x2D] & ptr[2]) == 0) {
        D_03004830[0x2D] |= ptr[2];
        arg0->unk68 = (u32)(ptr + 3);
    }
}

void sub_08012364(Entity *arg0)
{
    u8 *ptr = (u8 *)arg0->unk68;

    if ((ptr[2] & 0x80) == 0) {
        sub_08010744(arg0, ptr[2]);
    } else {
        D_0300413C = ptr[2] | 0xFF00;
        sub_08010744(arg0, (s16)D_0300413C);
    }
}

void sub_08012344(Entity *arg0)
{
    if ((s8)D_03004830[0x2C] == 0) {
        sub_080123FC(arg0);
    }
}
