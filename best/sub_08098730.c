typedef struct {
    u8 pad00[0xF1];
    u8 unkF1;
    u8 padF2[2];
    u16 unkF4;
    u16 unkF6;
    u8 padF8[0x124 - 0xF8];
} Struct03002AB0;

extern Struct03002AB0 D_03002AB0[];

s32 sub_08098730(Entity *arg0, Struct03002AB0 **arg1) {
    u8 count = arg0->unk60;
    *arg1 = D_03002AB0;
    do {
        Struct03002AB0 *cur = *arg1;
        u16 *previous = &cur->unkF6;
        u16 *current = &cur->unkF4;
        if (*current != *previous && !(cur->unkF1 & 0x80)) {
            *arg1 = D_03002AB0;
            while (1) {
                if (!((*arg1)->unkF1 & 0x80)) {
                    return 0;
                }
                (*arg1)++;
            }
        }
        *arg1 = cur + 1;
    } while (--count != 0);
    return 1;
}
