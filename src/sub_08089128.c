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

void sub_08089268(Entity88 *arg0);
void sub_0808917C(Entity88 *arg0);

void sub_08089128(Entity88 *arg0)
{
    Entity88 *unk6C = arg0->unk6C;
    u8 *p = &unk6C->unkDA;
    u8 val = *p++;
    if (val != *p) {
        sub_0808917C(arg0);
    } else {
        val = unk6C->unk4C;
        if (val == 4) {
            sub_08089268(arg0);
        } else {
            val = unk6C->unk4D;
            if (val != 4) {
                sub_0808917C(arg0);
            } else {
                val = (arg0->unk3B - 1) * 2;
                arg0->unk70 = val;
                arg0->unk4D++;
            }
        }
    }
}
