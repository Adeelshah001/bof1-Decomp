typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u16 pad04;
    u16 unk6;
    u8 pad08[0x0A];
    u16 unk12;
} SceneActor52BE0;

extern const u8 D_080FDCA6[];
extern const u32 D_080FDD40[];

u8 sub_0805321C(SceneActor52BE0 *, u16 *);
void sub_0805ABF4(s32, s32, u32);

u8 sub_08052BE0(SceneActor52BE0 *actor, u16 *pos)
{
    s32 flag = 1;

    *pos = actor->unk12;
    while (1) {
        const u8 *table = D_080FDCA6 + 1;
        u8 cmd = table[*pos];
        if (cmd == 0xFF)
            return 0;
        if (cmd == 0xFE) {
            u8 res = sub_0805321C(actor, pos);
            if (res != 0xFF)
                return res;
            flag = 0;
        } else if (cmd == 0xFD) {
            u8 res = sub_0805321C(actor, pos);
            if (res != 0xFF)
                return res;
            flag = 0;
        } else {
            u32 next;
            sub_0805ABF4((actor->unk6 << 5) + actor->unk2, flag, D_080FDD40[cmd - 0x40]);
            flag = 0;
            next = *pos + 1;
            *pos = next;
            actor->unk12 = next;
        }
    }
}
