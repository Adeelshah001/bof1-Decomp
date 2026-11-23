extern u16 D_030033D4;
extern u32 D_03001694;
extern u8 D_030023E0[];

void sub_08005274(s32);
void sub_08023FD8(s32);
void sub_0800518C(s32, s32, s32);
void sub_0802411C(s32, s32);

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
    s8 unk2C;
} State4830;

typedef struct {
    u8 pad00[0x68];
    s32 unk68;
} State3420;

typedef struct {
    u8 pad00[0x18];
    u8 *unk18;
} State23E0;

void sub_0801FC04(void) {
    State4830 *s = (State4830 *)D_03004830;
    if (s->unk2C == 0) {
        sub_08005274(8);
    }
    sub_08023FD8(0x70);
    D_030033D4 = 0xFFF8;
    s->unk2B |= ~0x7F;
}

void sub_0801FBC8(void) {
    u8 *p;
    D_03001694 |= 0x20;
    sub_0800518C(0x18E, 0x488, 0x717C);
    p = D_03004830;
    p[0x2C] = 0;
    p[0x2B]++;
}

void sub_0801FC4C(void) {
    ((State3420 *)D_03003420)->unk68++;
    ((State23E0 *)D_030023E0)->unk18[0x55] = 0;
    ((State4830 *)D_03004830)->unk2B |= ~0x7F;
}

void sub_0801FB94(void) {
    sub_0802411C(0x4F00, 0x1A0);
    sub_0802411C(0x4EC0, 0x1C0);
    ((State4830 *)D_03004830)->unk2B |= ~0x7F;
}
