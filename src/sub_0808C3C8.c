extern u8 D_03004F50[];

typedef struct Entity8C {
    u8 pad00[0x02];
    u8 unk2;
    u8 pad03[0x03];
    u8 unk6;
    u8 pad07[0x2C - 0x07];
    u8 unk2C;
    u8 pad2D[0x41 - 0x2D];
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0x78 - 0x55];
    s32 unk78;
    u8 pad7C[0xE4 - 0x7C];
    u16 unkE4;
    u16 unkE6;
} Entity8C;

void sub_08083BB4(Entity *entity);
s32 sub_0807CA70(Entity *entity);
void sub_0808C410(Entity *entity);
void sub_0808C478(Entity *entity, s32 arg1);
u8 sub_0807CAB8(Entity8C *arg0, s32 *out);
void sub_0807C600(Entity8C *arg0, s32 arg1);
void sub_08037FC4(Entity8C *arg0, s32 arg1);
void sub_08083484(Entity8C *arg0);
void sub_0808C4D0(Entity8C *arg0);
void sub_0808C4E4(Entity8C *arg0);

void sub_0808C394(Entity8C *arg0)
{
    arg0->unk2 += 2;
    arg0->unk6 += 2;
    arg0->unk2C = arg0->unk6;
    if (arg0->unk2C > 0x34) {
        arg0->unkE4 = arg0->unk2;
        arg0->unkE6 = arg0->unk6;
        arg0->unk4D = 0;
    }
}

void sub_0808C3C8(Entity *entity)
{
    u16 *amount = (u16 *)((u8 *)entity + 0x106);
    u16 saved = *amount;
    u16 half = saved >> 1;
    u8 zero = 0;
    u8 *battle;

    *amount = half;
    sub_08083BB4(entity);
    *amount = saved;
    battle = D_03004F50;
    battle[0x5D] = zero;
    if (sub_0807CA70(entity)) {
        sub_0808C410(entity);
    } else {
        sub_0808C478(entity, 0x10);
    }
}

void sub_0808C428(Entity8C *arg0)
{
    s32 sp0;
    u8 ret;
    do {
        ret = sub_0807CAB8(arg0, &sp0);
        if (ret == 0) {
            return;
        }
        arg0->unk78 = sp0;
        *(s32 *)(D_03004F50 + 0x54) = sp0;
        if (ret == 1) {
            sub_0808C478((Entity *)arg0, 0xE);
            return;
        }
    } while (ret == 2);
    sub_0807C600(arg0, 2);
    sub_08037FC4(arg0, 2);
}

void sub_0808C480(Entity8C *arg0)
{
    if (--arg0->unk54 != 0) {
        if ((arg0->unk54 & 1) == 0) {
            sub_0808C4D0(arg0);
        } else {
            arg0->unk41 = 0xE;
            sub_0808C4E4(arg0);
        }
    } else {
        sub_08083484(arg0);
        arg0->unk4D = 0x14;
        sub_0808C4D0(arg0);
    }
}
