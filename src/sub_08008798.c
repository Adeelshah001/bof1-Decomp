extern u8 D_03002AB0[];
extern u8 D_030023DC;
struct Struct_030023E0 {
    u8 pad[0xA4];
    u16 unkA4;
};
extern struct Struct_030023E0 D_030023E0;
void sub_080017EC(s32);
void sub_080073D8(u16);

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
} ScriptRequestFields;

void sub_08008770(void) {
    if (D_030023E0.unkA4 == 0) {
        sub_080017EC(0x3E);
        D_03004830[0x2B]++;
    }
}

void sub_08008798(void) {
    if (D_030023DC != 1) {
        sub_080073D8(0xA);
        D_03004830[0x2B]++;
    }
}

void sub_080087D8(void) {
    u16 request = 0x8030;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

void sub_08008804(void) {
    u8 *p;
    u16 request;

    sub_080017EC(0x2C);
    p = D_03002AB0;
    p[0xB8] &= 0xFB;
    request = 0x8031;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)p)->unk94 = request;
    D_030023D0[0] = 2;
}
