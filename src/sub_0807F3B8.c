typedef struct {
    u8 pad00[0x06];
    u16 unk06;
    u8 pad08[0x124 - 0x08];
} Unk03002BD4;

extern Unk03002BD4 D_03002BD4[];

static inline void set_unk06(Unk03002BD4 *p, u16 val) {
    p->unk06 = val;
}

void sub_0807F3B8(void) {
    Unk03002BD4 *p = D_03002BD4;
    set_unk06(&p[0], 0xA24C);
    set_unk06(&p[1], 0xA25C);
    set_unk06(&p[2], 0xA26C);
}
