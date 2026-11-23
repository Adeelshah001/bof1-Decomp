extern u32 D_03007FF0;
extern u8 D_080BB2B0[];

void sub_0809E960(s32 a0, s32 a1, s32 a2, void (*fn)(s32, s32, s32)) {
    fn(a0, a1, a2);
}

void sub_0809E970(void *mplayInfo, u8 *track) {
    u8 *chan;
    s32 type;

    if (track[0] & 0x80) {
        chan = *(u8 **)(track + 0x20);
        if (chan != NULL) {
            do {
                if (chan[0] != 0) {
                    type = chan[1] & 7;
                    if (type != 0) {
                        void (*fn)(s32) = *(void (**)(s32))(*(u32 *)D_03007FF0 + 0x2C);
                        fn(type);
                    }
                    chan[0] = 0;
                }
                *(u32 *)(chan + 0x2C) = 0;
                chan = *(u8 **)(chan + 0x34);
            } while (chan != NULL);
        }
        *(u8 **)(track + 0x20) = chan;
    }
}

void sub_0809E9B4(void) {
}

void sub_0809EBE4(void *mplayInfo, u8 *track) {
    u8 *cmdPtr = *(u8 **)(track + 0x40);
    u8 key = *cmdPtr;
    u8 *chan;

    if (key < 0x80) {
        track[5] = key;
        *(u8 **)(track + 0x40) = cmdPtr + 1;
    } else {
        key = track[5];
    }

    chan = *(u8 **)(track + 0x20);
    while (chan != NULL) {
        u8 status = chan[0];
        if ((status & 0x83) && !(status & 0x40) && chan[0x11] == key) {
            chan[0] = status | 0x40;
            break;
        }
        chan = *(u8 **)(chan + 0x34);
    }
}
