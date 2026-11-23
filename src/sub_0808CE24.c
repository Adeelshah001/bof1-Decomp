extern const u8 D_081529FC[][1];

typedef struct {
    u8 pad0[2];
    u8 unk2;
    u8 pad3[3];
    u8 unk6;
} Sub74;

void sub_0808CE24(u8 *arg0)
{
    u32 val = arg0[0x55];
    s32 offset;
    Sub74 *sub;
    arg0[0x55] = val + 1;
    if (val > 1) {
        arg0[0x55] = 0;
    }
    offset = val * 2;
    sub = *(Sub74 **)(arg0 + 0x74);
    val = D_081529FC[offset][0];
    sub->unk2 = val;
    val = D_081529FC[offset + 1][0];
    sub->unk6 = val;
}
