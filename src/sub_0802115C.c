extern u16 D_030033D4;
extern u16 D_030040F4;
extern u16 D_030040F8;
extern u16 D_03004890;
extern u16 D_03001864;
extern u16 D_03001644;
extern u8 D_030023E0[];
extern u8 D_03004620[];
extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[0x3C];
    u16 unk3C;
} Unk23E0;

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
} Unk2AB0;

void sub_08037A74(s32);
void sub_0800312C(s32, s32);
void sub_0802032C(void);
void sub_0805B7B8(s32);

void sub_08021130(void) {
    D_030033D4 = 0xFFFE;
    D_030040F4 = 0;
    D_03004830[0x2B]++;
}

void sub_0802115C(void) {
    D_03004830[0x2A] = 2;
    D_03004830[0x2B] = 0;
    D_03004890 = 0xC8;
    sub_08037A74(0x800);
}

void sub_08021188(void) {
    D_03001864 = 0;
    sub_0800312C(0x10, 0);
    D_03001644 = 0x10;
    ((Unk23E0 *)D_030023E0)->unk3C = 4;
    D_03004830[0x2C] = 0xB4;
    D_03004830[0x2B]++;
}

void sub_080210D4(void) {
    sub_0802032C();
    sub_0805B7B8(0x2000);
    sub_0805B7B8(0x1000);
    sub_0805B7B8(0x800);
    D_03004620[0xB6] = 0;
    D_03004620[0xB4] = 0;
    ((Unk2AB0 *)D_03002AB0)->unk3A = 0;
    D_030040F8 = 0x111C;
    D_03004830[0x2B]++;
}
