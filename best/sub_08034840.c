typedef void (*FuncPtr3467C)(void *, void *);
extern const FuncPtr3467C D_080FA804[];

void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_0802C840(s32, s32, s32, s32);
void sub_08035290(void *, s32);

typedef struct {
    u8 pad00[0x4D];
    u8 unk4D;
    u8 pad4E[0x88 - 0x4E];
    u32 unk88;
    u8 pad8C[0xF0 - 0x8C];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
} Struct2AB0;

extern Struct2AB0 D_03002AB0[];

typedef struct {
    u8 pad00[0x4C];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x88 - 0x51];
    u8 *unk88;
    u8 pad8C[0xB8 - 0x8C];
    u8 unkB8;
} Obj3467C;

void sub_0803467C(Obj3467C *arg0) {
    u8 *ptr = arg0->unk88;
    D_080FA804[ptr[1]](arg0, ptr + 2);
}

void sub_080346E0(Obj3467C *arg0) {
    sub_0800312C(0x10, 0xA);
    sub_08001F80(0, 0, 0);
    sub_0802C840(0x31, 0x578, 0x3ECC, 0);
    arg0->unk88 += 2;
}

void sub_080344FC(Obj3467C *arg0) {
    u8 i;
    for (i = 0; i <= 3; i++) {
        Struct2AB0 *entry = &D_03002AB0[i];
        u8 flag = entry->unkF0 & 0x40;
        if (flag == 0 && entry->unk88 != 0 && entry->unk4D == 8) {
            entry->unk4D = flag;
        }
    }
    arg0->unk88 += 2;
}

void sub_08034840(Obj3467C *arg0) {
    arg0->unkB8 &= 0xFB;
    sub_08035290(arg0, 0x806B);
    D_030023D0[0] = 2;
    arg0->unk88 = 0;
    arg0->unk4C = 2;
    arg0->unk50 = 0;
    arg0->unk4D = 0;
}
