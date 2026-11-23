/* sub_0802265C */
extern u16 D_0202DBD0[];
extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern void sub_0805CF40(u16 item_id, u16 *out_slot);
extern void sub_08004EA0(u16 arg0);

void sub_0802265C(void) {
    u16 slot;
    u16 *table;
    sub_0805CF40(0x170, &slot);
    table = (u16 *)((u8 *)D_0202DBD0 + 0x204);
    table[slot] = 0x171;
    sub_08004EA0(0x818E);
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
}

/* sub_080226BC */
extern u8 D_03003420[];
extern void sub_08016854(u8 arg0, u8 *arg1);

void sub_080226BC(void) {
    s8 *state;
    s8 val;
    u32 extended;
    u16 *ptr;
    state = (s8 *)D_03004830;
    val = state[0x41] - 1;
    state[0x41] = val;
    if (val == 0) {
        sub_08016854(0x28, D_03002AB0);
        state[0x41] = 0xA0;
        state[0x40] = state[0x40] + 1;
    } else {
        extended = (u32)(s32)val;
        if (extended > 0x2F) {
            ptr = (u16 *)(D_03003420 + 6);
            *ptr = *ptr + 1;
        }
    }
}

/* sub_08023314 */
extern u8 D_03003F98[];
extern u8 D_03003F9C[];
extern u16 D_03004114[];
extern s8 sub_08023374(void);

s32 sub_08023314(void) {
    u8 zero;
    s8 result;
    s32 extended;
    zero = 0;
    D_03004114[0] = 0;
    if (D_03003F9C[0] & 0x80) {
        result = sub_08023374();
        extended = (s32)result;
        D_03004114[0] = (u16)extended;
        return extended;
    } else {
        D_03004830[0x4D] = 0x30;
        D_03003F9C[0] = 0x80;
        D_03004830[0x3F] = 2;
        D_03004830[0x40] = 2;
        D_03004830[0x41] = zero;
        D_03003F98[0] |= 0x40;
        return 0;
    }
}

/* sub_08023D88 */
extern void *sub_0803ED98(void);
extern u8 sub_08001770(u8 arg0);

void sub_08023D88(void) {
    u8 r4;
    void *ent;
    u16 val1;
    u16 val2;
    D_03004830[0x3F] = 0x26;
    D_03004830[0x40] = 0;
    r4 = sub_08001770(0xA4);
    if (r4 == 0) {
        ent = sub_0803ED98();
        if (ent != NULL) {
            ((u8 *)ent)[0x3A] = 1;
            ((u8 *)ent)[0x3C] = 0x0D;
            ((u8 *)ent)[0x3B] = r4;
            val1 = 0x0C68;
            ((u16 *)ent)[1] = val1;
            val2 = 0x979C;
            ((u16 *)ent)[3] = val2;
            ((u16 *)ent)[0x16] = val2;
        }
    }
}
