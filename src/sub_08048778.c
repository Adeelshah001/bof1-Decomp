typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;
extern MapState D_030023E0;
extern const u8 D_0822E93C[];
extern const u32 * const D_080FCA30[];
void sub_08037FC4(void *, u16);

void sub_08048778(Entity *arg0) {
    u16 offset = D_0822E93C[D_030023E0.mode * 2] | (D_0822E93C[D_030023E0.mode * 2 + 1] << 8);
    offset += arg0->unk3B * 4;
    arg0->unk2A = D_0822E93C[offset] * 2;
    arg0->unk64 = D_080FCA30[D_030023E0.mode][arg0->unk3B];
    ((u8 *)arg0)[0x80] = 0;
    ((u8 *)arg0)[0x3D] = 2;
    sub_08037FC4(arg0, D_0822E93C[offset + 1] * 2);
}
