extern u8 D_020291C0[];
void sub_0804DEF4(void *arg0);

void sub_0804DE7C(void *arg0) {
    struct {
        u8 pad0[0x02];
        u8 unk2;
        u8 pad3[0x03];
        u16 unk6;
        u8 pad8[0x0A];
        u16 unk12;
        u8 pad14[0x02];
        u8 unk16;
        u8 pad17[0x94];
        u16 unkAC;
        u16 unkAE;
    } *entity = arg0;

    u16 temp;
    u16 idx_ae;
    u16 idx_ac;
    u16 sum;
    u16 diff;
    u32 base;
    u32 offset;

    temp = entity->unk12 + entity->unk6;
    if (temp <= 0x9F) {
        idx_ae = temp + entity->unkAE;
        idx_ac = temp + entity->unkAC;

        sum = entity->unk2 + entity->unk16;
        if (sum > 0xFF) {
            sum = 0xFF;
        }

        base = 0x020291C0;
        offset = 0x100;

        *(u8 *)(base + offset + idx_ae) = (u8)sum;

        diff = (u8)*(u16 *)&entity->unk2 - (u8)*(u16 *)&entity->unk16;
        if (diff & 0x8000) {
            diff = 0;
        }

        *(u8 *)(base + offset + idx_ac) = (u8)diff;
    }
    sub_0804DEF4(arg0);
}
