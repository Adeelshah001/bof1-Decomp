extern u16 D_03001864;

void sub_0803A8EC(void *);
void sub_08077518(void *);
u16 sub_0807B2BC(void *);

static inline u16 helper(void *arg0) {
    if ((((u8 *)arg0)[0xDC] & 0x40) || (((u8 *)arg0)[0xDD] & 2)) {
        return 0xFFFF;
    }
    return sub_0807B2BC(arg0);
}

void sub_080775CC(Entity *arg0) {
    if (helper(arg0) != 0) {
        if (((u8 *)arg0)[0xF1] & 0x80) {
            ((u8 *)arg0)[0x2C] = 0;
        } else {
            arg0->unk2C = arg0->unk6 + 0x18;
        }
        if ((u16)(D_03001864 - 0x10) > 1) {
            sub_0803A8EC(arg0);
        }
    } else {
        ((u8 *)arg0)[0x50] = 6;
        sub_08077518(arg0);
    }
}
