typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x1C - 0x04];
    u16 unk1C;
    u8 pad1E[0x3B - 0x1E];
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x64 - 0x42];
    u32 unk64;
    u8 pad68[0x6C - 0x68];
    u8 unk6C;
} Entity456;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

extern Struct23E0 D_030023E0;

void sub_08045C30(void);
void sub_08045F70(void);
void sub_08045504(void);
void sub_08037FC4(Entity456 *, s32);
void sub_0803A8EC(Entity456 *);

void sub_08045600(Entity456 *arg0) {
    arg0->unk3B = 0xFF;
    arg0->unk6C = 0x80;
    arg0->unk1C = 0x60;
    arg0->unk64 = (u32)sub_08045C30;
}

void sub_08045620(Entity456 *arg0) {
    sub_08037FC4(arg0, 6);
    arg0->unk41 = (arg0->unk41 & ~0x30) | 0x20;
    if (D_030023E0.unkA4 == 0xDF) {
        arg0->unk41 = 0xC;
    }
    arg0->unk1C = 0x60;
    arg0->unk64 = (u32)sub_08045F70;
}

void sub_08045694(Entity456 *arg0) {
    arg0->unk3B = 0x80;
    sub_08037FC4(arg0, 0x10);
    arg0->unk1C = 0x80;
    arg0->unk64 = (u32)sub_08045504;
}

void sub_080456E0(Entity456 *arg0) {
    Entity456 *e = arg0;
    if (D_030023E0.unkA4 == 0x1B5) {
        arg0->unk2 += 8;
        arg0->unk41 = 0x2C;
    }
    e->unk1C = 0x80;
    e->unk64 = (u32)sub_08045504;
    sub_0803A8EC(e);
}
