struct UnkActor929F8 {
    u8 pad00[0x46];
    u8 unk46;
    u8 pad47[0x4C - 0x47];
    u8 unk4C;
    u8 pad4D[0x55 - 0x4D];
    u8 unk55 : 8;
    u8 pad56[0x6C - 0x56];
    u32 unk6C;
    u8 pad70[0x78 - 0x70];
    u32 unk78;
};

extern u16 D_02020FC0;
extern u16 D_020211C0;
extern u32 D_03001694;

void sub_0804E1B4(struct UnkActor929F8 *);
void sub_0804E1C0(struct UnkActor929F8 *);
void sub_0807372C(s32);
void sub_08093640(struct UnkActor929F8 *);

void sub_080929F8(struct UnkActor929F8 *actor)
{
    u8 *p46 = &actor->unk46;
    u8 val = *p46 + 1;
    if (val <= 0x7B) {
        *(u16 *)p46 = val;
        if ((--actor->unk55) & 0x80) {
            actor->unk55 = 2;
            sub_0804E1B4(actor);
            sub_0804E1C0(actor);
        }
    } else {
        actor->unk4C++;
        D_02020FC0 = D_020211C0 = 0;
        actor->unk78 = actor->unk6C;
        sub_0807372C(0);
        D_03001694 &= ~8;
        sub_08093640(actor);
    }
}
