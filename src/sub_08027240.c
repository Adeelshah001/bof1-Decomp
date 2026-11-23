typedef struct {
    u8 pad00[0x2];
    vu16 unk2;
    u8 pad04[0x2];
    u16 unk6;
} Unk08027240;

void sub_08027A00(Unk08027240 *);

s32 sub_08027240(Unk08027240 *arg0) {
    if ((arg0->unk6 & 0xFF) == 0x9C) {
        switch (arg0->unk2 & 0xFF) {
        case 0x48:
        case 0x98:
        case 0x38:
            sub_08027A00(arg0);
            break;
        case 0xA8:
            sub_08027A00(arg0);
            break;
        }
    }
    return 0;
}
