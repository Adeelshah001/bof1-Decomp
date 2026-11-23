typedef struct Entity88 {
    u8 pad00[0x06];
    u8 unk6;
    u8 pad07[0x3B - 0x07];
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x4C - 0x42];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 unk55 : 8;
    u8 pad56[0x61 - 0x56];
    u8 unk61;
    u8 pad62[0x6C - 0x62];
    struct Entity88 *unk6C;
    u8 unk70;
    u8 pad71[0x74 - 0x71];
    struct Entity88 *unk74;
    u8 pad78[0xDA - 0x78];
    u8 unkDA;
    u8 unkDB;
} Entity88;

u16 sub_08091680(void);
void sub_08083300(Entity88 *arg0, s32 arg1);
void sub_0807B2BC(void);
void sub_08088FB4(Entity88 *arg0);
void sub_08083BB4(Entity88 *arg0);
void sub_08089268(Entity88 *arg0);
void sub_0808917C(Entity88 *arg0);

void sub_08088FB4(Entity88 *arg0)
{
    s32 val = 0x4A;
    if (sub_08091680() == 0x7E) {
        val = 0x48;
    }
    sub_08083300(arg0, val);
    arg0->unk74->unk41 = arg0->unk41;
}

void sub_08088F40(Entity88 *arg0)
{
    sub_0807B2BC();
    if (--arg0->unk54 == 0) {
        sub_08088FB4(arg0);
        sub_08083BB4(arg0);
        arg0->unk61 = (arg0->unk61 + 0x10) & 0x1F;
        arg0->unk4D = 8;
    }
}

void sub_08089128(Entity88 *arg0)
{
    Entity88 *unk6C = arg0->unk6C;
    if (unk6C->unkDA == unk6C->unkDB) {
        if (unk6C->unk4C == 4) {
            sub_08089268(arg0);
            return;
        }
        if (unk6C->unk4D == 4) {
            arg0->unk70 = (arg0->unk3B - 1) * 2;
            arg0->unk4D++;
            return;
        }
    }
    sub_0808917C(arg0);
}

void sub_0808917C(Entity88 *arg0)
{
    arg0->unk41 = arg0->unk6C->unk41;
    if (--arg0->unk55 & 0x80) {
        arg0->unk55 = 8;
        arg0->unk54 = -arg0->unk54;
        arg0->unk6 += arg0->unk54;
    }
}
