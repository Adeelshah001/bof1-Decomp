typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3B - 0x2E];
    u8 unk3B;
    u8 pad3C[0x64 - 0x3C];
    u32 unk64;
    u8 pad68[0x6C - 0x68];
    u8 unk6C;
} Entity45F;

extern u8 D_03002AB0[];
void sub_0804608C(Entity45F *, u16);
void sub_0803A8EC(Entity45F *);
void sub_08045084(void);
void sub_0804503C(void);
u16 sub_08037C98(Entity45F *, s32);
void sub_08037FC4(Entity45F *, s32);
void sub_0803A974(Entity45F *);
void sub_08045E24(void);

void sub_08045FCC(Entity45F *arg0) {
    s32 y = ((Entity45F *)D_03002AB0)->unk6 + 0xD;
    arg0->unk6 = y;
    arg0->unk2C = y;
    sub_0804608C(arg0, arg0->unk6);
}

void sub_08045FE8(Entity45F *arg0) {
    s32 y = ((Entity45F *)D_03002AB0)->unk6 - 0x15;
    arg0->unk6 = y;
    arg0->unk2C = y;
    sub_0804608C(arg0, arg0->unk6);
}

void sub_08045F88(Entity45F *arg0) {
    u8 state = arg0->unk6C;
    if (state != 0) {
        if (state == 1) {
            arg0->unk64 = (u32)sub_08045084;
        } else {
            arg0->unk64 = (u32)sub_0804503C;
        }
    }
    sub_0803A8EC(arg0);
}

void sub_0804601C(Entity45F *arg0) {
    Entity45F *e = arg0;
    if (sub_08037C98(arg0, 1) == 0) {
        sub_08037FC4(arg0, arg0->unk3B * 2);
        arg0->unk64 = (u32)sub_08045E24;
    }
    sub_0803A974(e);
}
