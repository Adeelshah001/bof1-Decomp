extern const char D_080A7C18[];
extern const char D_080A7F20[];
extern const char D_080A7F44[];
extern const char D_080A7F68[];

struct UnkStruct9AA {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x38 - 0x08];
    u16 unk38;
    u8 pad3A[0x44 - 0x3A];
    s32 unk44;
    s32 unk48;
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 unk55;
};

void sub_080352D0(const char *, const char *, s32, ...);
void sub_0809AA2C(struct UnkStruct9AA *);
void sub_08099758(struct UnkStruct9AA *);
void sub_0809AAA4(struct UnkStruct9AA *);
void sub_0809AABC(struct UnkStruct9AA *);
void sub_0809AB38(struct UnkStruct9AA *);
void sub_0809AB74(struct UnkStruct9AA *);
void sub_0809ABB8(struct UnkStruct9AA *);

void sub_0809A9F0(struct UnkStruct9AA *arg0) {
    u8 state = arg0->unk4C;
    switch (state) {
    default:
        sub_080352D0(D_080A7F20, D_080A7C18, 0x924, state);
        break;
    case 0:
        sub_0809AA2C(arg0);
        break;
    case 1:
        sub_08099758(arg0);
        break;
    }
}

void sub_0809AA2C(struct UnkStruct9AA *arg0) {
    arg0->unk54 = 0x0F;
    arg0->unk55 = 5;
    arg0->unk2 = 0x0F58;
    arg0->unk6 = 0x2F40;
    arg0->unk44 = 0xFB000;
    arg0->unk48 = 0x2F3C00;
    arg0->unk38 = 0xA0;
    arg0->unk4C++;
}

void sub_0809AA68(struct UnkStruct9AA *arg0) {
    u8 state = arg0->unk4C;
    switch (state) {
    default:
        sub_080352D0(D_080A7F44, D_080A7C18, 0x973, state);
        break;
    case 0:
        sub_0809AAA4(arg0);
        break;
    case 1:
        sub_0809AABC(arg0);
        break;
    }
}

void sub_0809AAE4(struct UnkStruct9AA *arg0) {
    switch (arg0->unk4C) {
    case 0:
        sub_0809AB38(arg0);
        break;
    case 1:
        sub_0809AB74(arg0);
        break;
    case 2:
        sub_0809ABB8(arg0);
        break;
    default:
        sub_080352D0(D_080A7F68, D_080A7C18, 0x9A1, arg0->unk4C);
        break;
    }
}
