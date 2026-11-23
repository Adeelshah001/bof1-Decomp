typedef struct Obj89EA8 Obj89EA8;

struct Obj89EA8 {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x4D - 0x2E];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0x6C - 0x55];
    Obj89EA8 *unk6C;
    u8 pad70[0xE4 - 0x70];
    u16 unkE4;
    u16 unkE6;
};

void sub_0807BDB0(Obj89EA8 *, s32, s32);
void sub_0807CB08(void);
void sub_08037FC4(Obj89EA8 *, s32);

void sub_08089EA8(Obj89EA8 *arg0)
{
    if (arg0->unk54 == 8) {
        Obj89EA8 *child;
        u16 val;
        sub_0807BDB0(arg0, 7, 0);
        child = arg0->unk6C;
        val = 0xF48;
        child->unk2 = val;
        child->unkE4 = val;
        val = 0x2F5A;
        child->unk6 = val;
        child->unkE6 = val;
        child->unk2C = val;
    }
    if (--arg0->unk54 == 0) {
        u16 val = 0xF64;
        arg0->unk2 = val;
        arg0->unkE4 = val;
        val = 0x2F58;
        arg0->unk6 = val;
        arg0->unkE6 = val;
        sub_0807CB08();
        arg0->unk4D = 0xA;
        sub_08037FC4(arg0, 0);
    }
}
