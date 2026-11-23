extern u8 D_03000F44[];
extern u8 D_03002AB0[];
s32 sub_08073B9C(void *);

void sub_08074AA4(Entity *arg0) {
    u8 unk63 = ((u8 *)arg0)[0x63];
    s32 i;
    u32 j;

    if (unk63 <= 3) {
        D_03000F44[unk63] = 1;
    }

    i = 0;
    j = 0;
    while (i < arg0->unk60) {
        if (sub_08073B9C(&D_03002AB0[j]) != 0) {
            if (D_03000F44[i] == 0) {
                ((u8 *)arg0)[0x63] = (u8)i;
                return;
            }
        }
        j += 0x124;
        i++;
    }
    ((u8 *)arg0)[0x63] = 0xFF;
}
