extern s32 D_030010F4;
extern u16 D_03001688;
extern u16 D_030016C4;

void sub_0807372C(s32 arg0) {
    D_030010F4 = arg0;
    switch (arg0) {
    case 0:
        D_03001688 = 0;
        break;
    case 1:
        D_03001688 = 0x3F;
        break;
    case 2:
        D_030010F4 = 0;
        D_03001688 = 0x28;
        break;
    case 3:
        D_03001688 = 0;
        break;
    default:
        return;
    }
    D_030016C4 = 0x3F37;
}
