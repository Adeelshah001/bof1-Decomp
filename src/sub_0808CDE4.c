extern const u8 D_081529FC[][1];

void sub_0808CDE4(Entity *arg0)
{
    s32 state;
    arg0->unk54 = 0x3C;
    state = 0x0C;
    arg0->unk4D = state;
}

typedef struct {
    u8 pad0[2];
    u8 unk2;
    u8 pad3[3];
    u8 unk6;
} Sub74;

void sub_0808CE24(u8 *arg0)
{
    u32 idx = arg0[0x55];
    s32 offset;
    Sub74 *sub;
    arg0[0x55] = idx + 1;
    if (idx > 1) {
        arg0[0x55] = 0;
    }
    offset = idx * 2;
    sub = *(Sub74 **)(arg0 + 0x74);
    sub->unk2 = D_081529FC[offset][0];
    sub->unk6 = D_081529FC[offset + 1][0];
}
