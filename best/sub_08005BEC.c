extern u32 D_03000814[];
extern vu32 D_040000D4[];
extern u8 D_0201AFC0[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];

extern u8 D_03004830[];
extern u8 D_030040F0[];
extern u8 D_03003FB0[];
extern u8 D_03002500[];

extern u8 D_030040E0[];
extern u8 D_03000840[];
extern u8 D_03003420[];

void sub_080050B4(s32, s32, s32, s32);
void sub_0803D510(void);
void *sub_0803ED98(void);

void sub_080052E0(void) {
    if (D_03000814[0] & 8) {
        D_040000D4[0] = (u32)D_0201AFC0;
        D_040000D4[1] = (u32)D_02020FC0;
        D_040000D4[2] = 0x80000100u;
        (void)D_040000D4[2];
        D_040000D4[0] = (u32)D_0201AFC0 + 0x800;
        D_040000D4[1] = (u32)D_020211C0;
        D_040000D4[2] = 0x80000100u;
        (void)D_040000D4[2];
    }
}

void sub_0800571C(void) {
    if (D_03004830[0x2C] == 0) {
        u32 *p = (u32 *)D_030040F0;
        u32 val = *p;
        if (val == 0x1F) {
            D_03004830[0x2C] = 0x20;
            D_03004830[0x2B]++;
        } else {
            val = val + 1;
            *p = val;
            *(u32 *)D_03003FB0 = val;
            *(u32 *)D_03002500 = val;
            D_03004830[0x2C] = 4;
        }
    }
}

void sub_080059D8(void) {
    if (*(u16 *)D_030040E0 <= 0x215B) {
        void *ent = sub_0803ED98();
        *(void **)D_03000840 = ent;
        if (ent != NULL) {
            ((u8 *)ent)[0x3B] = 0xD;
            ((u8 *)ent)[0x3E] = 0;
            ((u8 *)ent)[0x3A] = 1;
            ((u8 *)ent)[0x3C] = 0x12;
            *(u32 *)((u8 *)ent + 0xD4) = 0;
        }
        D_03004830[0x2B]++;
    }
}

void sub_08005BEC(void) {
    u16 *base = (u16 *)D_03003420;
    u32 *base32 = (u32 *)D_03003420;

    base[1] = 0x268;
    base[3] = 0x213C;
    base[0x101] = 0x2A8;
    base[0x103] = 0x213C;
    base32[0x68 / 4]++;
    base32[0x268 / 4]++;
    D_03004830[0x2C] = 0x40;
    D_03004830[0x2B]++;
}
