typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0x64 - 0x3D];
    u32 unk64;
} Entity55;

extern u8 D_03003F98;

u8 sub_08001770(s32);
void sub_080017EC(s32);
s32 sub_08037C98(void *, s32);
void sub_08037FC4(void *, s32);
s32 sub_0803A8EC(void *);
void sub_0803EE38(void *);
void sub_08055A64(void *);

void sub_08055934(Entity55 *arg0) {
    if (sub_08001770(0x98) == 0) {
        sub_08037FC4(arg0, 4);
        arg0->unk3C = 0x85;
        arg0->unk64 = (u32)sub_08055A64;
        sub_08037C98(arg0, 0);
        if (!(D_03003F98 & 0x80)) {
            goto other;
        }
        sub_080017EC(0x98);
    }
    sub_0803EE38(arg0);
    return;
other:
    sub_0803A8EC(arg0);
}
