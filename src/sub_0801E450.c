extern u8 D_0202DBD0[];

void sub_08004EA0(s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
s32 sub_0805CF40(u16, u16 *);
void sub_080017EC(s32);
void sub_0801270C(void);
u8 sub_08038458(s32);
void sub_08003378(s32);

typedef struct {
    u8 pad00[0x204];
    u16 slots[1];
} Unk2DBD0;

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
    u8 unk2C;
    u8 unk2D;
} ScriptState;

void sub_0801E450(void) {
    u8 *p = D_03004830;
    s32 val = (s8)p[0x2D];
    if (val < 0) {
        sub_08004EA0(0x8522);
        p[0x2B]++;
    }
}

void sub_0801E480(void) {
    u8 *base;
    sub_0800312C(0x10, 0x12);
    sub_08001F80(0, 0, 0);
    base = D_03004830;
    base[0x2C] = 0x44;
    base[0x2B]++;
}

void sub_0801E4B0(void) {
    u16 slot;
    if (--D_03004830[0x2C] == 0) {
        sub_0805CF40(0x161, &slot);
        ((Unk2DBD0 *)D_0202DBD0)->slots[slot] = 0x162;
        sub_080017EC(0xDB);
        sub_08004EA0(0x8523);
        sub_0801270C();
    }
}

void sub_0801E508(void) {
    if (sub_08038458(0) != 0) {
        sub_08003378(0x2C);
        sub_08004EA0(0x8532);
        ((ScriptState *)D_03004830)->unk2B |= ~0x7F;
        D_03004830[0x2D] |= 1;
    }
}
