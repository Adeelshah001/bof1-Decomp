extern u8 D_03002AB0[];
extern u8 D_03003420[];
extern u8 D_03004830[];

void sub_080074C4(void);

typedef struct {
    u8 pad0[6];
    u16 unk6;
} Unk6Struct;

void sub_08012C2C(Entity *arg0) {
    u8 *state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    (*(u32 *)(state + 0x1AC))++;
    (*(u32 *)(state + 0x2D0))++;
    (*(u32 *)(state + 0x3F4))++;
    sub_080074C4();
    ((Unk6Struct *)D_03003420)->unk6++;
    arg0->unk68 += 2;
}

void sub_080128AC(void) {
    sub_080074C4();
    (*(u32 *)(D_03002AB0 + 0x88))++;
    (*(u32 *)(D_03002AB0 + 0x1AC))++;
    (*(u32 *)(D_03002AB0 + 0x2D0))++;
    (*(u32 *)(D_03002AB0 + 0x3F4))++;
    D_03004830[0x2B]++;
}
