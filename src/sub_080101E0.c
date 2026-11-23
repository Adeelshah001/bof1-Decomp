extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern u8 D_03004100[];
extern u8 D_03004114[];
extern u8 D_03004120[];
extern u32 D_080F66C0[];

extern void sub_080A0774(void *, u32);
void sub_080327A4(void *arg0, void *arg1, void *arg2);
void sub_080102AC(s32 arg0, s32 arg1);

typedef struct {
    u8 pad0[1];
    u8 unk1;
} UnkSubStruct;

void sub_080101E0(Entity *arg0) {
    u32 *table = D_080F66C0;
    UnkSubStruct *e = (UnkSubStruct *)arg0->unk68;
    sub_080A0774(arg0, table[e->unk1]);
}

void sub_08010228(void) {
    u8 *event = D_03002AB0;
    u8 *state = D_03004830;
    u8 v;
    event[0xB8] = ((v = 4 + (event[0xB8] >> 8)), v | event[0xB8]);
    state[0x2B]++;
}

void sub_08010160(void) {
    sub_080327A4(D_03002AB0, D_03004120, D_03004100);
    {
        u8 *p = D_030023E0;
        u16 val = *(u16 *)(p + 0xA4);
        if (val == 0x133)
            sub_080102AC(0x1C8, 0xFFFFAB2C);
        else if (val == 0xD9)
            sub_080102AC(0x1C8, 0x6A6C);
        else
            *(u16 *)D_03004114 = 0;
    }
}

void sub_08010260(void) {
    u8 *state = D_03002AB0;
    *(u32 *)(state + 0x88) += 1;
}
