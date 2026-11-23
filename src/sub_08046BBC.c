typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x02];
    u16 unk06;
} State03002AB0;

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x2C - 0x04];
    u16 unk2C;
    u8 pad2E[0x3B - 0x2E];
    u8 unk3B;
    u8 pad3C[0x61 - 0x3C];
    u8 unk61;
} Actor46BBC;

extern State03002AB0 D_03002AB0;
u8 sub_08046A9C(Actor46BBC *arg0);
u8 sub_08047280(Actor46BBC *arg0);

u8 sub_08046BBC(Actor46BBC *arg0) {
    u8 ret = sub_08046A9C(arg0);
    if (ret == 0) {
        if (arg0->unk3B != 2) {
            u8 dir = arg0->unk61;
            u8 newDir;
            if (dir != 1 && dir != 3) {
                newDir = 3;
                if (arg0->unk02 != D_03002AB0.unk02) {
                    if (arg0->unk02 > D_03002AB0.unk02) {
                        newDir = 1;
                    }
                    goto try_move;
                }
            } else {
                newDir = 0;
                if (arg0->unk2C != D_03002AB0.unk06) {
                    if (arg0->unk2C > D_03002AB0.unk06) {
                        newDir = 2;
                    }
                try_move:
                    arg0->unk61 = newDir;
                    return (u8)sub_08046A9C(arg0);
                }
            }
        }
        return (u8)sub_08047280(arg0);
    }
    return ret;
}
