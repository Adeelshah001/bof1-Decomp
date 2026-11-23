extern u8 D_030023E0[];
extern u8 D_03002510[];
extern u8 D_03002AB0[];
extern void sub_08032AB0(u8 arg0);

void sub_0802E570(Entity *arg0) {
    u8 *p = (u8 *)arg0;
    u8 temp = p[0x54] - 1;
    p[0x54] = temp;
    if ((temp << 24) != 0) {
        if (!(temp & 2)) {
            p[0xB8] |= 8;
            return;
        }
        p[0xB8] &= 0xF7;
        return;
    }
    p[0x50] += 2;
}

void sub_0802E52C(Entity *arg0) {
    u8 *p = (u8 *)arg0;
    u8 temp = p[0x55] - 1;
    p[0x55] = temp;
    if ((temp << 24) == 0) {
        p[0x55] = 6;
        temp = p[0x54] - 1;
        p[0x54] = temp;
        if (!(temp & 0x80)) {
            sub_08032AB0(p[0x54]);
            return;
        }
        p[0x54] = 0x10;
        p[0x50] = 2;
    }
}

void sub_0802E3AC(Entity *arg0) {
    u8 *p = (u8 *)arg0;
    u16 val = *(u16 *)(D_030023E0 + 0xA4);
    
    if (val == 0x102 || val == 0xBB) {
        p[0x50] = 6;
    } else {
        u8 *ptr2 = D_03002510 + 0x3A;
        *ptr2 |= 0x40;
        
        if (D_03004830[0x36] == 0x85) {
            p[0x54] = 0x10;
            p[0x50] = 0xA;
        } else {
            p[0x54] = 0x10;
            p[0x50] = 2;
        }
    }
}

void sub_0802E868(Entity *arg0) {
    u8 *p = (u8 *)arg0;
    u8 temp = p[0x54] - 1;
    u16 temp2;
    s32 var;
    
    p[0x54] = temp;
    if ((temp << 24) == 0) {
        p[0x54] = 0x1E;
        p[0x50] = 4;
        D_03002AB0[0xC2] = 1;
        temp2 = *(u16 *)(p + 0xF6);
        if (temp2 != 0) {
            var = temp2 - 2;
            if (var < 1) {
                var = 1;
            }
            *(u16 *)(p + 0xF6) = (u16)var;
        }
    }
}
