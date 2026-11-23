typedef struct {
    u8 pad00[0x2C];
    u16 unk2C;
    u8 pad2E[0x5C - 0x2E];
    u8 unk5C;
    u8 pad5D[0x5F - 0x5D];
    u8 unk5F;
    u8 pad60[0x64 - 0x60];
    u32 unk64;
    u8 pad68[0x6C - 0x68];
    u8 unk6C;
} Entity55;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

extern Struct23E0 D_030023E0;
u8 sub_08055660(u8);
void sub_080379D4(s32);
s32 sub_0803A8EC(void *);
void sub_0804503C(void *);

void sub_08055568(Entity55 *arg0) {
    if (sub_08055660(arg0->unk5C) != 0) {
        arg0->unk64 = (u32)sub_0804503C;
        arg0->unk6C++;
        arg0->unk5F = 0x10;
        if (D_030023E0.unkA4 != 0x91) {
            sub_080379D4(0x14);
        }
        if (D_030023E0.unkA4 != 0x1A8) {
            arg0->unk2C += 8;
        }
    }
    sub_0803A8EC(arg0);
}
