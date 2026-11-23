extern u8 D_030023E0[];
extern u8 D_030023DC[];
extern u8 D_030033D8[];
extern u8 D_03002AB0[];
extern u8 D_03004584[];
extern u8 D_030040F8[];
extern u8 D_030023D0[];
extern u8 D_03003420[];
extern void sub_080031D4(s32);
extern s32 sub_08038458(s32);
extern void sub_0802FD60(s32);
extern s32 sub_08030C80(void);

typedef struct { u8 pad00[0xA4]; u16 unkA4; } T_030023E0;
typedef struct { u8 pad00[0x2B]; u8 unk2B; u8 unk2C; } T_03004830;
typedef struct { u8 pad00[0x4C]; u16 unk4C; u16 unk50; } T_03002AB0_a;
typedef struct { u8 pad00[0x3C]; u8 unk3C; } T_03002AB0_b;
typedef struct { u8 pad00[0x94]; u32 unk94; } T_03002AB0_c;
typedef struct { u8 pad00[0x1E8]; u32 unk1E8; } T_03003420;
typedef struct { u8 pad00[0x68]; u32 unk68; } T_arg0;

void sub_0800893C(void) {
    T_03004830 *s;
    if (((T_030023E0 *)D_030023E0)->unkA4 == 0x6C && *(u8 *)D_030023DC != 1) {
        s = (T_03004830 *)D_03004830;
        s->unk2C = 0x3E;
        s->unk2B += 1;
    }
}

void sub_08008C58(void) {
    T_03002AB0_a *a;
    sub_080031D4(1);
    *(u8 *)D_030033D8 = 0;
    a = (T_03002AB0_a *)D_03002AB0;
    a->unk4C = 0;
    a->unk50 = 0;
    *(u8 *)D_03004584 = 1;
}

void sub_080094B0(void) {
    T_03002AB0_b *b;
    T_03004830 *s;
    if ((sub_08038458(1) << 24) != 0) {
        b = (T_03002AB0_b *)D_03002AB0;
        if (b->unk3C == 0) {
            *(u16 *)D_030040F8 = 2;
            sub_0802FD60(2);
        } else {
            *(u16 *)D_030040F8 = 4;
            sub_0802FD60(4);
        }
        s = (T_03004830 *)D_03004830;
        s->unk2B += 1;
    }
}

void sub_0800A390(void *arg0) {
    u32 val;
    T_03002AB0_c *c;
    T_03003420 *d;
    T_arg0 *t;
    val = 0x80EB;
    sub_08030C80();
    c = (T_03002AB0_c *)D_03002AB0;
    c->unk94 = val;
    *(u8 *)D_030023D0 = 2;
    d = (T_03003420 *)D_03003420;
    d->unk1E8 += 4;
    t = (T_arg0 *)arg0;
    t->unk68 += 2;
}
