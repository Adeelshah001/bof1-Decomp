typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x46 - 0x3C];
    u16 unk46;
    u8 pad48[0x64 - 0x48];
    void (*unk64)(void *);
} Entity557;

extern const u16 D_080FEC3C[];

void sub_0803800C(Entity557 *, s32, u16);
void sub_0803EE6C(Entity557 *);
void sub_08055B54(void *);

void sub_080556F4(Entity557 *arg0) {
    u8 idx;
    u16 val = D_080FEC3C[(idx = arg0->unk3B) - 8];
    if (idx == 0xE) {
        sub_0803EE6C(arg0);
    } else {
        sub_0803800C(arg0, idx * 2, val);
        arg0->unk46--;
        arg0->unk64 = sub_08055B54;
    }
}
