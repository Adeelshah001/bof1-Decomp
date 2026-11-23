struct Unk3002AB0_754 {
    u8 pad00[0x116];
    u16 unk116;
};

struct Unk3002AB0_B4 {
    u8 pad00[0xEC];
    u16 unkEC;
    u16 unkEE;
};

extern struct Unk3002AB0_754 D_03002AB0;

u8 sub_0807545C(u8);
u8 sub_08075474(s32);
s32 sub_08075488(void);
s32 sub_080754B4(void);

u8 sub_08075474(s32 arg0) {
    u8 val = arg0 << 1;
    if ((val << 3) > 0x3F) {
        return 0x3F;
    }
    return val << 3;
}

s32 sub_08075488(void) {
    u16 val = D_03002AB0.unk116;
    if (val != 0x2107 && val != 0x2126) {
        return 1;
    }
    return 0;
}

s32 sub_080754B4(void) {
    struct Unk3002AB0_B4 *p = (struct Unk3002AB0_B4 *)&D_03002AB0;
    u16 a = p->unkEC;
    u16 b;
    if (a != 0x214F && (b = p->unkEE) != 0x214F && a != 0x2167 && b != 0x2167) {
        return 1;
    }
    return 0;
}

u8 sub_08075428(u8 arg0) {
    if (sub_08075488() != 0) {
        return sub_0807545C(arg0);
    }
    if (sub_080754B4() == 0) {
        return arg0;
    }
    return sub_08075474(arg0);
}
