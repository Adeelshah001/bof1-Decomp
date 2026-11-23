typedef struct {
    u8 pad00[0x3E];
    u8 unk3E;
    u8 pad3F[0x50 - 0x3F];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u16 unk54;
    u8 pad56[0xB8 - 0x56];
    u16 unkB8;
} Entity4E8;

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
} Struct16E0;

typedef struct {
    u8 pad00[0xB1];
    u8 unkB1;
} Struct4620;

extern Struct16E0 D_030016E0;
extern Struct4620 D_03004620;
extern u16 D_030016A8;

void sub_08037A74(s32);
u8 sub_0804ECA0(Entity4E8 *);

void sub_0804E878(Entity4E8 *arg0) {
    if (--(*(u8 *)&arg0->unk54) == 0) {
        *(u8 *)&arg0->unk54 = 4;
        if (sub_0804ECA0(arg0) != 0) {
            if (arg0->unk3E == 0) {
                arg0->unk54 = 0x640;
            } else {
                arg0->unk54 = 0x1E0;
            }
            arg0->unk50++;
        }
    }
}

void sub_0804E8C4(Entity4E8 *arg0) {
    u16 *p54;
    if (arg0->unk3E != 0) {
        p54 = &arg0->unk54;
        goto dec;
    }
    p54 = &arg0->unk54;
    if (!(D_030016E0.unk6 & 1)) {
    dec:
        if (--(*p54) != 0) {
            return;
        }
    }
    *(u8 *)p54 = 4;
    if (arg0->unkB8 == 0x64) {
        sub_08037A74(0x100);
    }
    arg0->unk50++;
}

u8 sub_0804ECA0(Entity4E8 *arg0) {
    u8 ret = 0;
    u32 cnt = D_03004620.unkB1 + 1;
    D_03004620.unkB1 = cnt;
    if (cnt & 1) {
        u16 val = D_030016A8;
        u32 lo = 0x1F & val;
        u8 hi = (val >> 8) & 0x1F;
        if (lo <= 0xF) {
            lo++;
        }
        if (hi != 0) {
            hi--;
        } else {
            ret = 1;
        }
        D_030016A8 = (hi << 8) | lo;
    }
    return ret;
}

u8 sub_0804ECF0(void) {
    u8 ret = 0;
    u32 cnt = D_03004620.unkB1 + 1;
    D_03004620.unkB1 = cnt;
    if (cnt & 1) {
        u16 val = D_030016A8;
        u8 lo = 0x1F & val;
        u32 hi = (val >> 8) & 0x1F;
        if (hi <= 0xF) {
            hi++;
        }
        if (lo != 0) {
            lo--;
        } else {
            ret = 1;
        }
        D_030016A8 = (hi << 8) | lo;
    }
    return ret;
}
