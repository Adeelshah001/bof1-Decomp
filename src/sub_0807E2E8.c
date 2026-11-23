extern Entity D_030034A0;
extern const u8 D_080A6870[];

void sub_08037FC4(void *, u8);
void sub_080A0A68(void *, const void *, s32);
void sub_080A0AC8(void *, s32, s32);
void sub_08030AD8(s32);

static inline void set_type(void *arg0, u8 arg1) {
    u8 sp0[4];
    u8 sp4[4];
    u8 *p = sp0;
    u8 val;

    sub_080A0AC8(p, 0, 4);
    p[1] = 1;
    sub_080A0A68(sp4, D_080A6870, 4);
    val = p[arg1];
    *(u8 *)((u8 *)arg0 + 0x40) = val;
    sub_08037FC4(arg0, sp4[arg1]);
}

void sub_0807E2E8(void) {
    Entity *g = &D_030034A0;
    u16 val = 0xC78;

    *(u16 *)((u8 *)g + 2) = val;
    val = 0x979C;
    g->unk6 = val;
    g->unk2C = val;
    set_type(g, 2);
    D_03004830[0x2D]++;
    sub_08030AD8(0x1E);
}
