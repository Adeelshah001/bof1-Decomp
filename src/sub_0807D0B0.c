typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
    u8 pad42[0x7D - 0x42];
    u8 unk7D;
} Entity7D0B0;

extern u8 D_03003410;
extern u8 D_03004F30[];
extern u8 D_03004F50[];

u16 sub_080915B4(Entity7D0B0 *);
void sub_08037FC4(Entity7D0B0 *, u16);
void sub_0807D114(Entity7D0B0 *, s32);

void sub_0807D0B0(Entity7D0B0 *arg0) {
    arg0->unk41 = arg0->unk7D >> 4;
    if (!(D_03004F30[9] & 0xA0)) {
        if (arg0->unk3C != 0x23 && arg0->unk3C != 0x51) {
            sub_08037FC4(arg0, sub_080915B4(arg0));
        }
    }
    D_03003410 = 0;
    D_03004F50[0x10] = 0x10;
    sub_0807D114(arg0, 2);
}
