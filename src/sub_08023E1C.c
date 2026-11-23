extern u8 D_03002AB0[];
extern u32 D_080F8AB0[];
extern u8 D_030023E0[];
extern u8 D_03004114[];
extern u8 D_030045B0[];
extern u32 D_080F8E80[];
extern u32 D_080F8A38[];
extern u32 D_080F899C[];

extern void sub_080A0774(void *, u32);
extern void sub_080A0770(u32);
void sub_080240BC(u8 arg0);
void sub_08023F94(void *arg0);
s8 sub_08027990(void);
s8 sub_08023F5C(u16 arg0, u16 arg1);

typedef struct {
    u8 pad0[1];
    u8 unk1;
} UnkSubStruct;

void sub_08023E78(Entity *arg0) {
    u32 *table = D_080F8AB0;
    UnkSubStruct *e = (UnkSubStruct *)arg0->unk68;
    sub_080A0774(arg0, table[e->unk1]);
}

u8 sub_08023E94(void) {
    u8 *p;
    u16 val;
    if (sub_08027990() != 0)
        return 1;
    p = D_030023E0;
    val = *(u16 *)(p + 0xA4);
    if (val == 0)
        sub_080240BC((u8)val);
    sub_08023F94(D_080F8E80);
    return D_03004114[0];
}

void sub_08023E54(u8 *arg0) {
    if (arg0[2] == 0xFE) {
        u32 *table = D_080F8A38;
        sub_080A0774(NULL, table[arg0[3]]);
    }
}

void sub_08023E1C(void) {
    u8 *base = D_03002AB0;
    u32 *table;
    u8 *state;
    D_030045B0[1] = sub_08023F5C(*(u16 *)(base + 2), *(u16 *)(base + 6));
    table = D_080F899C;
    state = D_03004830;
    sub_080A0770(table[state[0x3F]]);
}
