extern const char D_080A69BC[];
extern const char D_080A69C4[];
extern u8 D_03004F30[];
extern u16 D_03001864;

struct UnkStruct85934 {
    u8 pad00[0x4C];
    u8 unk4C;
};

void sub_080352D0(const char *, const char *, s32, ...);
void sub_0803A8EC(struct UnkStruct85934 *);
void sub_0803EE6C(struct UnkStruct85934 *);
void sub_080857C4(struct UnkStruct85934 *);
void sub_08085840(struct UnkStruct85934 *);

void sub_08085934(struct UnkStruct85934 *arg0)
{
    switch (arg0->unk4C) {
    case 0:
        sub_080857C4(arg0);
        break;
    case 2:
        sub_08085840(arg0);
        break;
    case 4:
        D_03004F30[0xC] &= ~2;
        sub_0803EE6C(arg0);
        break;
    default:
        sub_080352D0(D_080A69C4, D_080A69BC, 0xE8, arg0->unk4C);
        break;
    }

    if (D_03001864 != 0x10 && D_03001864 != 0x11) {
        sub_0803A8EC(arg0);
    }
}
