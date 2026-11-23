extern const u8 D_080A6870[];
void sub_08037FC4(void *, u8);
void sub_080A0A68(void *, const void *, s32);
void sub_080A0AC8(void *, s32, s32);

typedef struct {
    u8 pad00[0x61];
    u8 unk61;
    u8 pad62[0x124 - 0x62];
} Unk03002AB0;

extern Unk03002AB0 D_03002AB0[];

static inline void set_type(void *arg0, u8 arg1) {
    u8 states[4];
    u8 directions[4];
    u8 *initial = states;
    u8 val;
    sub_080A0AC8(initial, 0, 4);
    initial[1] = 1;
    sub_080A0A68(directions, D_080A6870, 4);
    val = initial[arg1];
    ((u8 *)arg0)[0x40] = val;
    sub_08037FC4(arg0, directions[arg1]);
}

void sub_0807E358(void) {
    Unk03002AB0 *p = D_03002AB0;
    p[0].unk61 = 0;
    p[1].unk61 = 0;
    p[2].unk61 = 0;
    p[3].unk61 = 0;
    set_type(D_03003420, 2);
}
