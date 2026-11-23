extern u8 D_020211A0[];
extern u8 D_02021380[];

typedef struct Entity89 {
    u8 pad00[0x02];
    u8 unk2;
    u8 pad03[0x06 - 0x03];
    u8 unk6;
    u8 pad07[0x41 - 0x07];
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x74 - 0x4E];
    struct Entity89 *unk74;
    s32 unk78;
} Entity89;

u16 sub_0807B2BC(Entity89 *arg0);
void sub_08083300(Entity89 *arg0, s32 arg1);

void sub_08089E3C(Entity89 *arg0) {
    if (sub_0807B2BC(arg0) == 0) {
        Entity89 *p;
        u16 i;

        sub_08083300(arg0, 0x14);
        p = arg0->unk74;
        p->unk2 += 0xC;
        p->unk6 -= 0x10;
        p->unk78 = arg0->unk78;
        arg0->unk4D = 6;
        p->unk41 = 0xC;

        i = 0x1E;
        do {
            u16 val = *(u16 *)(i + (u32)D_020211A0);
            *(u16 *)(i + (u32)(D_020211A0 - 0x20)) = val;
            *(u16 *)(i + (u32)D_02021380) = val;
            i -= 2;
        } while (!(i & 0x8000));
    }
}
