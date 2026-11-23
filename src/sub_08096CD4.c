extern u8 D_03003410;
extern const u8 D_08152DEA[];
extern const u8 D_081A0E7C[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern s32 D_030040F0;
extern s32 D_03003FB0;
extern s32 D_03002500;

void sub_08096CE8(u8 *);
void sub_0803EE6C(u8 *);
void sub_08095618(u8 *);
void sub_08096CD4(u8 *);

void sub_08096CD4(u8 *arg0) {
    D_03003410 = 0;
    sub_08096CE8(arg0);
}

void sub_08096CE8(u8 *arg0) {
    sub_0803EE6C(arg0);
    arg0[0x54] = 0;
    arg0[0x55] = 0;
    if (arg0[0x3C] == 0xA && D_08152DEA[arg0[0x3B]] == 0) {
        sub_08095618(arg0);
    }
}

void sub_08096D44(u16 arg0) {
    u16 src = arg0;
    u16 dst = 0x1E0;
    s32 i = 0xF;
    do {
        u16 val = *(u16 *)(src + (u32)D_081A0E7C);
        *(u16 *)(dst + (u32)D_02020FC0) = val;
        *(u16 *)(dst + (u32)D_020211C0) = val;
        src += 2;
        dst += 2;
        i--;
    } while (i != 0);
}

void sub_08096C50(u8 *arg0) {
    u8 val = --arg0[0x54];
    if (val & 0x80) {
        arg0[0x54] = 3;
        D_030040F0--;
        D_03003FB0--;
        if (--D_03002500 == 0) {
            D_03003410 = 0;
            sub_08096CD4(arg0);
        }
    }
}
