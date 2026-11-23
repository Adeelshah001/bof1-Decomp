extern u8 D_03002AB0[];
extern u8 D_030033F0[];

typedef struct {
    u8 pad00[0x06];
    u16 unk06;
    u8 pad08[0x184 - 0x08];
    void (*unk184)(void);
    u8 pad188[0x214 - 0x188];
    void (*unk214)(void);
} Unk03002510;

typedef struct {
    u8 pad00[0x64];
    void (*unk64)(void);
    u8 pad68[0x144 - 0x68];
    void (*unk144)(void);
} UnkEntityPool;

extern Unk03002510 D_03002510;
extern UnkEntityPool gEntityPool;

void sub_08053B54(void);

void sub_08025124(void) {
    u8 *p;
    D_030033F0[0] &= 0x7F;
    D_03002AB0[0xB8] &= 0xFB;
    p = D_03004830;
    p[0x3F] = 0;
    p[0x40] = 0;
}

void sub_080251D4(void) {
    D_03002510.unk184 = sub_08053B54;
    D_03002510.unk214 = sub_08053B54;
    gEntityPool.unk64 = sub_08053B54;
    gEntityPool.unk144 = sub_08053B54;
    D_03002510.unk06 = 0xF52C;
    D_03004830[0x41] = 0x80;
    D_03004830[0x40]++;
}
