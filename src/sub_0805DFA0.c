typedef struct {
    u8 pad00[0x08];
    u8 unk08;
    u8 pad09[0x0D - 0x09];
    u8 unk0D;
} Unk5C574;

extern u8 D_0300169C;
extern u8 D_030045B0[];

Unk5C574 *sub_0805C574(u16);

s32 sub_0805E044(u16 arg0) {
    if (D_0300169C != 0) {
        return 0;
    }
    if (arg0 & 0xF000) {
        return 1;
    }
    if (!(sub_0805C574(arg0)->unk08 & 0x20)) {
        return 0;
    }
    return 1;
}

u16 sub_0805DFEC(u16 arg0) {
    u16 val = arg0 & 0xFF;
    u16 base;

    if (D_0300169C != 0) {
        base = 0x100;
        if (val > 0x5B) {
            base = 0x2100;
            if (val <= 0xB2) {
                base = 0x1100;
            }
        }
    } else if (D_030045B0[0x3B] == 3) {
        if (val > 0x5F) {
            val -= 0x60;
            base = 0x2100;
        } else {
            base = 0x1100;
        }
    } else {
        base = 0x100;
    }
    return val | base;
}

typedef struct {
    u8 pad00[0xEC];
    u16 unkEC;
    u16 unkEE;
    u8 padF0[0x10A - 0xF0];
    u8 unk10A;
    u8 unk10B;
} Unk5DFA0;

void sub_0805DFA0(Unk5DFA0 *arg0, u8 arg1, u16 arg2) {
    u16 val = arg0->unk10A;
    if (arg0->unkEC == arg2) {
        s32 sum = arg1 + val;
        if (sum > 0xFF) {
            sum = 0xFF;
        }
        val = sum;
    }
    if (arg0->unkEE == arg2) {
        s32 sum = arg1 + val;
        if (sum > 0xFF) {
            sum = 0xFF;
        }
        val = sum;
    }
    arg0->unk10A = val;
}

void sub_0805DF54(Unk5DFA0 *arg0, u8 arg1, u16 arg2) {
    u16 val = arg0->unk10B;
    if (arg0->unkEC == arg2) {
        s32 sum = arg1 + val;
        if (sum > 0xFF) {
            sum = 0xFF;
        }
        val = sum;
    }
    if (arg0->unkEE == arg2) {
        s32 sum = arg1 + val;
        if (sum > 0xFF) {
            sum = 0xFF;
        }
        val = sum;
    }
    arg0->unk10B = val;
}
