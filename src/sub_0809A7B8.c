extern const char D_080A7C18[];
extern const char D_080A7E94[];
extern const char D_080A7EBC[];
extern u8 D_03001864;

struct UnkStruct9A8 {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x38 - 0x2E];
    u16 unk38;
    u8 pad3A[0x4C - 0x3A];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
};

void sub_080352D0(const char *, const char *, s32, ...);
void sub_08037FC4(struct UnkStruct9A8 *, s32);
void sub_0803A8EC(struct UnkStruct9A8 *);
void sub_0809ABB8(struct UnkStruct9A8 *);
void sub_0809A89C(struct UnkStruct9A8 *);
void sub_0809A8B8(struct UnkStruct9A8 *);
void sub_08099648(struct UnkStruct9A8 *);
void sub_0809A80C(struct UnkStruct9A8 *);
void sub_08099524(struct UnkStruct9A8 *);
void sub_08099578(struct UnkStruct9A8 *);

void sub_0809AB38(struct UnkStruct9A8 *arg0)
{
    arg0->unk2 = 0xF4F;
    arg0->unk6 = 0x2F4F;
    arg0->unk2C = 0x2F4F;
    sub_08037FC4(arg0, 2);
    arg0->unk38 = 0x160;
    arg0->unk4C++;
    arg0->unk54 = 0x3C;
}

void sub_0809AB74(struct UnkStruct9A8 *arg0)
{
    if (--arg0->unk54 != 0) {
        if (D_03001864 != 0x10 && D_03001864 != 0x11) {
            sub_0803A8EC(arg0);
        }
    } else {
        arg0->unk4C++;
        sub_0809ABB8(arg0);
    }
}

void sub_0809A848(struct UnkStruct9A8 *arg0)
{
    switch (arg0->unk4C) {
    case 0:
        sub_0809A89C(arg0);
        break;
    case 2:
        sub_0809A8B8(arg0);
        break;
    case 4:
        sub_08099648(arg0);
        break;
    default:
        sub_080352D0(D_080A7EBC, D_080A7C18, 0x822, arg0->unk4C);
        break;
    }
}

void sub_0809A7B8(struct UnkStruct9A8 *arg0)
{
    switch (arg0->unk4C) {
    case 0:
        sub_0809A80C(arg0);
        break;
    case 2:
        sub_08099524(arg0);
        break;
    case 4:
        sub_08099578(arg0);
        break;
    default:
        sub_080352D0(D_080A7E94, D_080A7C18, 0x7C2, arg0->unk4C);
        break;
    }
}
