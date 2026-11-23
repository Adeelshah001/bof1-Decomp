typedef struct {
    u8 pad00[0x64];
    u32 unk64;
    u8 pad68[0x8D - 0x68];
    u8 unk8D;
} Unk4749C;

void sub_08037C98(Unk4749C *, s32);
void sub_0803A8EC(Unk4749C *);
u8 sub_08046BBC(Unk4749C *);
void sub_08046CAC(Unk4749C *);
void sub_08046D00(Unk4749C *);
void sub_08047404(Unk4749C *);
void sub_08047450(Unk4749C *);
u8 sub_080475B4(Unk4749C *);
void sub_08046894(Unk4749C *);

void sub_0804749C(Unk4749C *arg0) {
    sub_08037C98(arg0, 0);
    sub_08037C98(arg0, 0);
    if (sub_080475B4(arg0) != 0) {
        sub_08046CAC(arg0);
        if (--arg0->unk8D == 0) {
            arg0->unk64 = (u32)sub_08046894;
            sub_08047450(arg0);
        } else if (sub_08046BBC(arg0) != 0) {
            sub_08047404(arg0);
        } else {
            sub_08046D00(arg0);
        }
    }
    sub_0803A8EC(arg0);
}
