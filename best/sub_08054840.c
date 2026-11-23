
typedef struct {u8 pad00[0x3B]; u8 kind; u8 pad3C[0x6D-0x3C]; u8 flags;} EntityFlags54840;
extern struct {u8 pad00[0xA4];u16 state;} D_030023E0;
void sub_08054840(EntityFlags54840 *p) {
    u8 kind;
    if (D_030023E0.state != 0xCE) return;
    kind = p->kind;
    if (kind != 0x56 && kind != 0x25 && kind != 0x91) return;
    p->flags |= 4;
}
